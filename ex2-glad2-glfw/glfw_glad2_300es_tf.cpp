#include <glad/gles2.h>  // includes ES 3.0
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>
#include <vector>

// settings and constants
const int window_width = 800;
const int window_height = 600;
const int num_particles = 2000;

// shader sources from gl-snippets.md
const char* update_vert_shader = R"(#version 300 es
in vec2 old_position;
in vec2 velocity;

uniform float delta_time;
uniform vec2 canvas_size;

out vec2 new_position;

vec2 euclidean_modulo(vec2 n, vec2 m) {
    return mod(mod(n, m) + m, m);
}

void main() {
    new_position = euclidean_modulo(
        old_position + velocity * delta_time,
        canvas_size);
}
)";

const char* update_frag_shader = R"(#version 300 es
precision highp float;
void main() {
}
)";

const char* render_vert_shader = R"(#version 300 es
in vec2 position;
uniform mat4 mvp;

void main() {
    gl_Position = mvp * vec4(position, 0.0, 1.0);
    gl_PointSize = 2.0;
}
)";

const char* render_frag_shader = R"(#version 300 es
precision highp float;
out vec4 frag_color;

void main() {
    frag_color = vec4(1.0, 0.0, 0.0, 1.0);
}
)";

// global state
struct {
    GLuint update_prog;
    GLuint render_prog;
    struct {
        GLuint pos[2];  // double buffer positions
        GLuint vel;     // velocity buffer
    } buffers;
    struct {
        GLuint update[2];  // for updating positions
        GLuint render[2];  // for rendering particles
    } vaos;
    struct {
        GLuint tf[2];  // transform feedback objects
    } tfs;
    struct {
        GLuint curr_update_vao;
        GLuint curr_tf;
        GLuint curr_render_vao;
    } current;
    struct {
        GLuint next_update_vao; 
        GLuint next_tf;
        GLuint next_render_vao;
    } next;
    float last_time;
} g_state;

// uniform/attribute locations
struct {
    struct {
        GLint old_position;
        GLint velocity;
        GLint delta_time;
        GLint canvas_size;
    } update;
    struct {
        GLint position;
        GLint mvp;
    } render;
} g_locs;

// helper functions
float rand_float(float min, float max) {
    float scale = rand() / (float)RAND_MAX;
    return min + scale * (max - min);
}

bool check_shader_errors(GLuint shader) {
    GLint success;
    GLchar info_log[512];
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(shader, 512, NULL, info_log);
        std::cout << "shader compilation error:\n" << info_log << std::endl;
        return false;
    }
    return true;
}

GLuint create_program(const char* vs, const char* fs, const char** varyings = nullptr) {
    GLuint vert = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vert, 1, &vs, NULL);
    glCompileShader(vert);
    if (!check_shader_errors(vert)) return 0;

    GLuint frag = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(frag, 1, &fs, NULL);
    glCompileShader(frag);
    if (!check_shader_errors(frag)) return 0;

    GLuint prog = glCreateProgram();
    glAttachShader(prog, vert);
    glAttachShader(prog, frag);

    if (varyings) {
        glTransformFeedbackVaryings(prog, 1, varyings, GL_SEPARATE_ATTRIBS);
    }

    glLinkProgram(prog);

    glDeleteShader(vert);
    glDeleteShader(frag);

    return prog;
}

void setup_graphics() {
    // create shaders
    const char* varyings[] = { "new_position" };
    g_state.update_prog = create_program(update_vert_shader, update_frag_shader, varyings);
    g_state.render_prog = create_program(render_vert_shader, render_frag_shader);

    // get locations
    g_locs.update.old_position = glGetAttribLocation(g_state.update_prog, "old_position");
    g_locs.update.velocity = glGetAttribLocation(g_state.update_prog, "velocity");
    g_locs.update.delta_time = glGetUniformLocation(g_state.update_prog, "delta_time");
    g_locs.update.canvas_size = glGetUniformLocation(g_state.update_prog, "canvas_size");

    g_locs.render.position = glGetAttribLocation(g_state.render_prog, "position");
    g_locs.render.mvp = glGetUniformLocation(g_state.render_prog, "mvp");

    // create initial particle data
    std::vector<float> positions;
    std::vector<float> velocities;
    for (int i = 0; i < num_particles; i++) {
        positions.push_back(rand_float(0, window_width));
        positions.push_back(rand_float(0, window_height));
        velocities.push_back(rand_float(-300, 300));
        velocities.push_back(rand_float(-300, 300));
    }

    // create buffers
    glGenBuffers(2, g_state.buffers.pos);
    glGenBuffers(1, &g_state.buffers.vel);

    // initialize position buffers
    for (int i = 0; i < 2; i++) {
        glBindBuffer(GL_ARRAY_BUFFER, g_state.buffers.pos[i]);
        glBufferData(GL_ARRAY_BUFFER, positions.size() * sizeof(float), 
                    positions.data(), GL_DYNAMIC_DRAW);
    }

    // initialize velocity buffer
    glBindBuffer(GL_ARRAY_BUFFER, g_state.buffers.vel);
    glBufferData(GL_ARRAY_BUFFER, velocities.size() * sizeof(float), 
                velocities.data(), GL_STATIC_DRAW);

    // create VAOs
    glGenVertexArrays(2, g_state.vaos.update);
    glGenVertexArrays(2, g_state.vaos.render);

    // set up update VAOs
    for (int i = 0; i < 2; i++) {
        glBindVertexArray(g_state.vaos.update[i]);
        
        glBindBuffer(GL_ARRAY_BUFFER, g_state.buffers.pos[i]);
        glVertexAttribPointer(g_locs.update.old_position, 2, GL_FLOAT, GL_FALSE, 0, 0);
        glEnableVertexAttribArray(g_locs.update.old_position);
        
        glBindBuffer(GL_ARRAY_BUFFER, g_state.buffers.vel);
        glVertexAttribPointer(g_locs.update.velocity, 2, GL_FLOAT, GL_FALSE, 0, 0);
        glEnableVertexAttribArray(g_locs.update.velocity);
    }

    // set up render VAOs
    for (int i = 0; i < 2; i++) {
        glBindVertexArray(g_state.vaos.render[i]);
        glBindBuffer(GL_ARRAY_BUFFER, g_state.buffers.pos[i]);
        glVertexAttribPointer(g_locs.render.position, 2, GL_FLOAT, GL_FALSE, 0, 0);
        glEnableVertexAttribArray(g_locs.render.position);
    }

    // create transform feedbacks
    glGenTransformFeedbacks(2, g_state.tfs.tf);
    for (int i = 0; i < 2; i++) {
        glBindTransformFeedback(GL_TRANSFORM_FEEDBACK, g_state.tfs.tf[i]);
        glBindBufferBase(GL_TRANSFORM_FEEDBACK_BUFFER, 0, g_state.buffers.pos[i]);
    }

    // initialize double buffer state
    g_state.current.curr_update_vao = g_state.vaos.update[0];
    g_state.current.curr_tf = g_state.tfs.tf[1];
    g_state.current.curr_render_vao = g_state.vaos.render[1];

    g_state.next.next_update_vao = g_state.vaos.update[1];
    g_state.next.next_tf = g_state.tfs.tf[0];
    g_state.next.next_render_vao = g_state.vaos.render[0];
}

void render_frame(GLFWwindow* window) {
    float current_time = glfwGetTime();
    float delta_time = current_time - g_state.last_time;
    g_state.last_time = current_time;

    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // update particle positions using transform feedback
    glUseProgram(g_state.update_prog);
    glBindVertexArray(g_state.current.curr_update_vao);
    
    glUniform1f(g_locs.update.delta_time, delta_time);
    glUniform2f(g_locs.update.canvas_size, window_width, window_height);

    glEnable(GL_RASTERIZER_DISCARD);

    glBindTransformFeedback(GL_TRANSFORM_FEEDBACK, g_state.current.curr_tf);
    glBeginTransformFeedback(GL_POINTS);
    glDrawArrays(GL_POINTS, 0, num_particles);
    glEndTransformFeedback();
    glBindTransformFeedback(GL_TRANSFORM_FEEDBACK, 0);

    glDisable(GL_RASTERIZER_DISCARD);

    // render updated particles
    glUseProgram(g_state.render_prog);
    glBindVertexArray(g_state.current.curr_render_vao);

    float mvp[] = {
        2.0f/window_width, 0.0f, 0.0f, 0.0f,
        0.0f, -2.0f/window_height, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        -1.0f, 1.0f, 0.0f, 1.0f,
    };
    glUniformMatrix4fv(g_locs.render.mvp, 1, GL_FALSE, mvp);

    glDrawArrays(GL_POINTS, 0, num_particles);

    // swap double buffers
    GLuint temp_vao = g_state.current.curr_update_vao;
    GLuint temp_tf = g_state.current.curr_tf;
    GLuint temp_render = g_state.current.curr_render_vao;
    
    g_state.current.curr_update_vao = g_state.next.next_update_vao;
    g_state.current.curr_tf = g_state.next.next_tf;
    g_state.current.curr_render_vao = g_state.next.next_render_vao;
    
    g_state.next.next_update_vao = temp_vao;
    g_state.next.next_tf = temp_tf;
    g_state.next.next_render_vao = temp_render;

    glfwSwapBuffers(window);
}

int main() {
    glfwSetErrorCallback([](int error, const char* description) {
        std::cerr << "GLFW Error " << error << ": " << description << std::endl;
    });

    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    GLFWwindow* window = glfwCreateWindow(window_width, window_height, 
                                        "GLES 3.0 Transform Feedback", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // initialize glad2 for OpenGL ES 3.0
    int version;
    
    // using GLFW loader (recommended)
    version = gladLoadGLES2(glfwGetProcAddress);
    
    /* alternative: using GLAD's own loader
    version = gladLoaderLoadGLES2();
    */

    if (version == 0) {
        std::cerr << "Failed to initialize GLAD2" << std::endl;
        return -1;
    }

    setup_graphics();
    g_state.last_time = glfwGetTime();

    while (!glfwWindowShouldClose(window)) {
        render_frame(window);
        glfwPollEvents();

        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}