#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>

// print basic gl info without extensions
void gl_print_info() {
    const GLubyte* renderer = glGetString(GL_RENDERER);
    const GLubyte* vendor = glGetString(GL_VENDOR);
    const GLubyte* version = glGetString(GL_VERSION);
    const GLubyte* glsl_version = glGetString(GL_SHADING_LANGUAGE_VERSION);

    std::cout << "GL Vendor: " << vendor << std::endl;
    std::cout << "GL Renderer: " << renderer << std::endl;
    std::cout << "GL Version: " << version << std::endl;
    std::cout << "GLSL Version: " << glsl_version << std::endl;
}

// error callback for glfw
void glfw_error_callback(int error, const char* description) {
    std::cerr << "GLFW Error " << error << ": " << description << std::endl;
}

int main() {
    // initialize glfw
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // request legacy OpenGL context
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);

    // create window
    GLFWwindow* window = glfwCreateWindow(800, 600, "Legacy OpenGL (GLAD2)", nullptr, nullptr);
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

    // print gl info and version
    gl_print_info();
    std::cout << "GLAD2 GL version: " << GLAD_VERSION_MAJOR(version) << "." 
              << GLAD_VERSION_MINOR(version) << std::endl;

    // main loop
    while (!glfwWindowShouldClose(window)) {
        // clear screen with dark gray
        glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // set up modelview matrix for rotation
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        float time = (float)glfwGetTime();
        glRotatef(time * 90.0f, 0.0f, 0.0f, 1.0f);  // rotate 90 degrees per second

        // draw a triangle using immediate mode
        glBegin(GL_TRIANGLES);
            glColor3f(1.0f, 0.0f, 0.0f);   // red
            glVertex2f(-0.5f, -0.5f);
            glColor3f(0.0f, 1.0f, 0.0f);   // green
            glVertex2f(0.5f, -0.5f);
            glColor3f(0.0f, 0.0f, 1.0f);   // blue
            glVertex2f(0.0f, 0.5f);
        glEnd();

        // swap buffers and poll events
        glfwSwapBuffers(window);
        glfwPollEvents();

        // handle escape key
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }

    // cleanup
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}