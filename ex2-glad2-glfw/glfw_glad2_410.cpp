#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>

// shader sources
const char* vertex_shader_source = R"(
#version 410 core
layout (location = 0) in vec3 a_pos;
layout (location = 1) in vec3 a_color;

uniform mat4 u_transform;
out vec3 v_color;

void main() {
    gl_Position = u_transform * vec4(a_pos, 1.0);
    v_color = a_color;
}
)";

const char* fragment_shader_source = R"(
#version 410 core
in vec3 v_color;
out vec4 frag_color;

void main() {
    frag_color = vec4(v_color, 1.0);
}
)";

// print gl info and available extensions
void gl_print_info() {
    const GLubyte* renderer = glGetString(GL_RENDERER);
    const GLubyte* vendor = glGetString(GL_VENDOR);
    const GLubyte* version = glGetString(GL_VERSION);
    const GLubyte* glsl_version = glGetString(GL_SHADING_LANGUAGE_VERSION);

    std::cout << "GL Vendor: " << vendor << std::endl;
    std::cout << "GL Renderer: " << renderer << std::endl;
    std::cout << "GL Version: " << version << std::endl;
    std::cout << "GLSL Version: " << glsl_version << std::endl;

    // print some supported features
    GLint max_vertex_attribs;
    glGetIntegerv(GL_MAX_VERTEX_ATTRIBS, &max_vertex_attribs);
    std::cout << "Maximum vertex attributes supported: " << max_vertex_attribs << std::endl;
}

// glfw error callback
void glfw_error_callback(int error, const char* description) {
    std::cerr << "GLFW Error " << error << ": " << description << std::endl;
}

// shader compilation check
bool check_shader_errors(GLuint shader) {
    GLint success;
    GLchar info_log[512];
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(shader, 512, NULL, info_log);
        std::cout << "Shader compilation error:\n" << info_log << std::endl;
        return false;
    }
    return true;
}

int main() {
    // initialize glfw with error callback
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // request OpenGL 4.1 core profile
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL 4.1 Core (GLAD2)", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // initialize glad2
    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        std::cerr << "Failed to initialize GLAD2" << std::endl;
        return -1;
    }

    gl_print_info();
    std::cout << "GLAD2 GL version: " << GLAD_VERSION_MAJOR(version) << "." 
              << GLAD_VERSION_MINOR(version) << std::endl;

    // create and compile shaders
    GLuint vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex_shader, 1, &vertex_shader_source, nullptr);
    glCompileShader(vertex_shader);
    if (!check_shader_errors(vertex_shader)) return -1;

    GLuint fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment_shader, 1, &fragment_shader_source, nullptr);
    glCompileShader(fragment_shader);
    if (!check_shader_errors(fragment_shader)) return -1;

    // create and link shader program
    GLuint shader_program = glCreateProgram();
    glAttachShader(shader_program, vertex_shader);
    glAttachShader(shader_program, fragment_shader);
    glLinkProgram(shader_program);

    // check program linking
    GLint success;
    GLchar info_log[512];
    glGetProgramiv(shader_program, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shader_program, 512, nullptr, info_log);
        std::cerr << "Shader program linking failed:\n" << info_log << std::endl;
        return -1;
    }

    glDeleteShader(vertex_shader);
    glDeleteShader(fragment_shader);

    // vertex data with separate buffers for position and color
    float positions[] = {
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f,
         0.0f,  0.5f, 0.0f
    };

    float colors[] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f
    };

    // create vertex array object
    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    // create and set up vertex buffers
    GLuint position_buffer, color_buffer;
    
    // position buffer
    glGenBuffers(1, &position_buffer);
    glBindBuffer(GL_ARRAY_BUFFER, position_buffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(positions), positions, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
    glEnableVertexAttribArray(0);

    // color buffer
    glGenBuffers(1, &color_buffer);
    glBindBuffer(GL_ARRAY_BUFFER, color_buffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(colors), colors, GL_STATIC_DRAW);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
    glEnableVertexAttribArray(1);

    // get uniform locations
    GLint transform_loc = glGetUniformLocation(shader_program, "u_transform");

    // enable features available in 4.1
    glEnable(GL_TEXTURE_CUBE_MAP_SEAMLESS);
    glEnable(GL_PROGRAM_POINT_SIZE);

    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(shader_program);

        // calculate rotation matrix
        float time = (float)glfwGetTime();
        float angle = time * 90.0f;  // 90 degrees per second
        float radians = angle * 3.14159f / 180.0f;
        
        float transform[] = {
            cosf(radians), -sinf(radians), 0.0f, 0.0f,
            sinf(radians),  cosf(radians), 0.0f, 0.0f,
            0.0f,          0.0f,          1.0f, 0.0f,
            0.0f,          0.0f,          0.0f, 1.0f
        };

        glUniformMatrix4fv(transform_loc, 1, GL_FALSE, transform);

        glBindVertexArray(vao);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();

        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }

    // cleanup
    glDeleteBuffers(1, &position_buffer);
    glDeleteBuffers(1, &color_buffer);
    glDeleteVertexArrays(1, &vao);
    glDeleteProgram(shader_program);

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}