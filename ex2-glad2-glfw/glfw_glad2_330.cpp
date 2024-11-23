#include <glad/gl.h>  // glad2 uses gl.h instead of glad.h
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>

// shader sources remain the same
const char* vertexShaderSource = R"(
#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

out vec3 vertexColor;

uniform mat4 transform;

void main() {
    gl_Position = transform * vec4(aPos, 1.0);
    vertexColor = aColor;
}
)";

const char* fragmentShaderSource = R"(
#version 330 core
in vec3 vertexColor;
out vec4 FragColor;

void main() {
    FragColor = vec4(vertexColor, 1.0);
}
)";

void error_callback(int error, const char* description) {
    std::cerr << "GLFW Error " << error << ": " << description << std::endl;
}

void print_gl_info() {
    std::cout << "GL Vendor: " << glGetString(GL_VENDOR) << std::endl;
    std::cout << "GL Renderer: " << glGetString(GL_RENDERER) << std::endl;
    std::cout << "GL Version: " << glGetString(GL_VERSION) << std::endl;
    std::cout << "GLSL Version: " << glGetString(GL_SHADING_LANGUAGE_VERSION) << std::endl;

    // glad2 specific version info
    // std::cout << "GLAD2 GL version: " << GLVersion.major << "." << GLVersion.minor << std::endl;
}

int main() {
    glfwSetErrorCallback(error_callback);
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // request OpenGL 3.3 core profile
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    GLFWwindow* window = glfwCreateWindow(800, 600, "GLAD2 OpenGL 3.3 Demo", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // glad2 initialization is different
    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        std::cerr << "Failed to initialize GLAD2" << std::endl;
        return -1;
    }

    // optionally enable debug output if supported
    // if (GLAD_GL_ARB_debug_output) {
    //     std::cout << "Debug output is supported" << std::endl;
    // }

    print_gl_info();

    // compile and link shaders
    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
    glCompileShader(vertexShader);

    GLint success;
    GLchar infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(vertexShader, 512, nullptr, infoLog);
        std::cerr << "Vertex shader compilation failed:\n" << infoLog << std::endl;
        return -1;
    }

    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, nullptr);
    glCompileShader(fragmentShader);

    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(fragmentShader, 512, nullptr, infoLog);
        std::cerr << "Fragment shader compilation failed:\n" << infoLog << std::endl;
        return -1;
    }

    GLuint shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shaderProgram, 512, nullptr, infoLog);
        std::cerr << "Shader program linking failed:\n" << infoLog << std::endl;
        return -1;
    }

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    // setup vertex data
    float vertices[] = {
        // positions        // colors
        -0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f,  // red
         0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f,  // green
         0.0f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f   // blue
    };

    GLuint VAO, VBO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);

    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    // color attribute
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    GLint transformLoc = glGetUniformLocation(shaderProgram, "transform");

    // main rendering loop
    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(shaderProgram);

        // calculate rotation
        float time = (float)glfwGetTime();
        float angle = time * 90.0f;  // 90 degrees per second
        float radians = angle * 3.14159f / 180.0f;

        float transform[] = {
            cosf(radians), -sinf(radians), 0.0f, 0.0f,
            sinf(radians),  cosf(radians), 0.0f, 0.0f,
            0.0f,          0.0f,          1.0f, 0.0f,
            0.0f,          0.0f,          0.0f, 1.0f
        };

        glUniformMatrix4fv(transformLoc, 1, GL_FALSE, transform);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();

        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }

    // cleanup
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteProgram(shaderProgram);

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}