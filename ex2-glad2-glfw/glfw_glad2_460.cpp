#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>

// shader sources
const char* vertex_shader_source = R"(
#version 460 core
layout (location = 0) in vec3 a_pos;
layout (location = 1) in vec3 a_color;

layout(std140, binding = 0) uniform TransformUBO {
    mat4 u_transform;
};

out vec3 v_color;

void main() {
    gl_Position = u_transform * vec4(a_pos, 1.0);
    v_color = a_color;
}
)";

const char* fragment_shader_source = R"(
#version 460 core
in vec3 v_color;
out vec4 frag_color;

void main() {
    frag_color = vec4(v_color, 1.0);
}
)";

// print gl info and capabilities
void gl_print_info() {
    const GLubyte* renderer = glGetString(GL_RENDERER);
    const GLubyte* vendor = glGetString(GL_VENDOR);
    const GLubyte* version = glGetString(GL_VERSION);
    const GLubyte* glsl_version = glGetString(GL_SHADING_LANGUAGE_VERSION);

    std::cout << "GL Vendor: " << vendor << std::endl;
    std::cout << "GL Renderer: " << renderer << std::endl;
    std::cout << "GL Version: " << version << std::endl;
    std::cout << "GLSL Version: " << glsl_version << std::endl;

    // check for direct state access support
    std::cout << "Direct State Access supported: " 
              << (GLAD_GL_VERSION_4_5 ? "yes" : "no") << std::endl;
}

// gl debug message callback
void gl_message_callback(
    GLenum source, GLenum type, GLuint id,
    GLenum severity, GLsizei length,
    const GLchar* message, const void* user_param) {
    
    std::cout << "GL CALLBACK: " 
              << (type == GL_DEBUG_TYPE_ERROR ? "** GL ERROR **" : "") 
              << " type = 0x" << std::hex << type << std::dec
              << ", severity = 0x" << std::hex << severity << std::dec
              << ", message = " << message << std::endl;
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

    // request OpenGL 4.6 core profile with debug context
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL 4.6 Core (GLAD2)", nullptr, nullptr);
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

    // enable debug output
    glEnable(GL_DEBUG_OUTPUT);
    glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
    glDebugMessageCallback(gl_message_callback, nullptr);

    // create and compile shaders using SPIR-V compatible code
    GLuint vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex_shader, 1, &vertex_shader_source, nullptr);
    glCompileShader(vertex_shader);
    if (!check_shader_errors(vertex_shader)) return -1;

    GLuint fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment_shader, 1, &fragment_shader_source, nullptr);
    glCompileShader(fragment_shader);
    if (!check_shader_errors(fragment_shader)) return -1;

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

    // vertex data
    float vertices[] = {
        // positions        // colors
        -0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f,  // red
         0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f,  // green
         0.0f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f   // blue
    };

    // create and set up vertex array and buffers using DSA (Direct State Access)
    GLuint vao, vbo;
    glCreateVertexArrays(1, &vao);
    glCreateBuffers(1, &vbo);

    // allocate and initialize vertex buffer
    glNamedBufferStorage(vbo, sizeof(vertices), vertices, GL_DYNAMIC_STORAGE_BIT);
    glVertexArrayVertexBuffer(vao, 0, vbo, 0, 6 * sizeof(float));

    // set up vertex attributes using DSA
    glEnableVertexArrayAttrib(vao, 0);
    glEnableVertexArrayAttrib(vao, 1);
    glVertexArrayAttribFormat(vao, 0, 3, GL_FLOAT, GL_FALSE, 0);
    glVertexArrayAttribFormat(vao, 1, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float));
    glVertexArrayAttribBinding(vao, 0, 0);
    glVertexArrayAttribBinding(vao, 1, 0);

    // create UBO for transform matrix using DSA
    GLuint ubo;
    glCreateBuffers(1, &ubo);
    glNamedBufferStorage(ubo, 16 * sizeof(float), nullptr, GL_DYNAMIC_STORAGE_BIT);
    glBindBufferBase(GL_UNIFORM_BUFFER, 0, ubo);

    // enable seamless cubemap sampling
    glEnable(GL_TEXTURE_CUBE_MAP_SEAMLESS);

    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

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

        // update transform matrix using DSA
        glNamedBufferSubData(ubo, 0, sizeof(transform), transform);

        glUseProgram(shader_program);
        glBindVertexArray(vao);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();

        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }

    // cleanup
    glDeleteVertexArrays(1, &vao);
    glDeleteBuffers(1, &vbo);
    glDeleteBuffers(1, &ubo);
    glDeleteProgram(shader_program);

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}