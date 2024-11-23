# OpenGL/GLES Code Snippets

Common code snippets for OpenGL/GLES development. These snippets are designed to be self-contained and can be copied directly into your projects.

## System Information

### GL Basic Info
Prints basic GL/GLES information without extensions:

```cpp
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
```

### GL Extensions
Print only GL/GLES extensions:

```cpp
void gl_print_extensions() {
    const GLubyte* extensions = glGetString(GL_EXTENSIONS);
    
    // convert to string for easier parsing
    std::string ext_str(reinterpret_cast<const char*>(extensions));
    std::istringstream iss(ext_str);
    
    // print one extension per line for better readability
    std::string ext;
    while (iss >> ext) {
        std::cout << ext << std::endl;
    }
}
```

### EGL Basic Info
Prints basic EGL information:

```cpp
void egl_print_info() {
    EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    
    const char* vendor = eglQueryString(display, EGL_VENDOR);
    const char* version = eglQueryString(display, EGL_VERSION);
    const char* apis = eglQueryString(display, EGL_CLIENT_APIS);

    std::cout << "EGL Vendor: " << vendor << std::endl;
    std::cout << "EGL Version: " << version << std::endl;
    std::cout << "EGL Client APIs: " << apis << std::endl;
}
```

### EGL Extensions
Print EGL extensions:

```cpp
void egl_print_extensions() {
    EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    const char* extensions = eglQueryString(display, EGL_EXTENSIONS);
    
    // convert to string for easier parsing
    std::string ext_str(extensions);
    std::istringstream iss(ext_str);
    
    // print one extension per line
    std::string ext;
    while (iss >> ext) {
        std::cout << ext << std::endl;
    }
}
```

## GLFW Setup

### GLFW Basic Window Creation
Basic GLFW window creation without version-specific setup:

```cpp
GLFWwindow* glfw_create_window() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return nullptr;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Window", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return nullptr;
    }

    glfwMakeContextCurrent(window);
    return window;
}
```

## Version-Specific Window Creation

### OpenGL ES 2.0
```cpp
GLFWwindow* glfw_create_window_gles2() {
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    return glfwCreateWindow(800, 600, "OpenGL ES 2.0", NULL, NULL);
}
```

### OpenGL ES 3.0
```cpp
GLFWwindow* glfw_create_window_gles3() {
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    return glfwCreateWindow(800, 600, "OpenGL ES 3.0", NULL, NULL);
}
```

### OpenGL 3.3 Core
```cpp
GLFWwindow* glfw_create_window_gl33() {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    return glfwCreateWindow(800, 600, "OpenGL 3.3", NULL, NULL);
}
```

### OpenGL 4.1 Core
```cpp
GLFWwindow* glfw_create_window_gl41() {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    return glfwCreateWindow(800, 600, "OpenGL 4.1", NULL, NULL);
}
```

### OpenGL 4.6 with Debug
```cpp
GLFWwindow* glfw_create_window_gl46() {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);

    return glfwCreateWindow(800, 600, "OpenGL 4.6", NULL, NULL);
}
```

## Error Handling

### GLFW Error Callback
```cpp
void error_callback(int error, const char* description) {
    std::cerr << "GLFW Error " << error << ": " << description << std::endl;
}

// usage:
glfwSetErrorCallback(error_callback);
```

### OpenGL Debug Callback (4.3+)
```cpp
void gl_message_callback(
    GLenum source, GLenum type, GLuint id,
    GLenum severity, GLsizei length,
    const GLchar* message, const void* user_param) {
    
    std::cout << "GL CALLBACK: " 
        << (type == GL_DEBUG_TYPE_ERROR ? "** GL ERROR **" : "") 
        << " type = " << type 
        << ", severity = " << severity 
        << ", message = " << message << std::endl;
}

// usage:
glEnable(GL_DEBUG_OUTPUT);
glDebugMessageCallback(messageCallback, 0);
```

### Shader Compilation Check
```cpp
bool check_shader_errors(GLuint shader) {
    GLint success;
    GLchar infoLog[512];
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(shader, 512, NULL, infoLog);
        std::cout << "Shader compilation error:\n" << infoLog << std::endl;
        return false;
    }
    return true;
}
```

## Minimal Demo Templates

### Legacy OpenGL Triangle
```cpp
// legacy immediate mode triangle
glBegin(GL_TRIANGLES);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(-0.5f, -0.5f);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(0.5f, -0.5f);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.0f, 0.5f);
glEnd();
```

### Modern OpenGL Triangle Data
```cpp
// vertex data with positions and colors
float vertices[] = {
    // positions        // colors
    -0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f,  // red
     0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f,  // green
     0.0f,  0.5f, 0.0f, 0.0f, 0.0f, 1.0f   // blue
};
```

### Direct State Access (4.5+)
```cpp
// create and setup buffers using DSA
GLuint VAO, VBO;
glCreateVertexArrays(1, &VAO);
glCreateBuffers(1, &VBO);

glNamedBufferStorage(VBO, sizeof(vertices), vertices, GL_DYNAMIC_STORAGE_BIT);
glVertexArrayVertexBuffer(VAO, 0, VBO, 0, 6 * sizeof(float));

// setup vertex attributes using DSA
glEnableVertexArrayAttrib(VAO, 0);
glEnableVertexArrayAttrib(VAO, 1);
glVertexArrayAttribFormat(VAO, 0, 3, GL_FLOAT, GL_FALSE, 0);
glVertexArrayAttribFormat(VAO, 1, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float));
glVertexArrayAttribBinding(VAO, 0, 0);
glVertexArrayAttribBinding(VAO, 1, 0);
```

## Shader Templates

### GLSL ES 2.0
```glsl
// vertex shader
#version 100
attribute vec3 a_pos;
attribute vec3 a_color;
varying vec3 v_color;
uniform mat4 u_transform;

void main() {
    gl_Position = u_transform * vec4(a_pos, 1.0);
    v_color = a_color;
}

// fragment shader
#version 100
precision mediump float;
varying vec3 v_color;

void main() {
    gl_FragColor = vec4(v_color, 1.0);
}
```

### GLSL ES 3.0
```glsl
// vertex shader
#version 300 es
layout (location = 0) in vec3 a_pos;
layout (location = 1) in vec3 a_color;
uniform mat4 u_transform;
out vec3 v_color;

void main() {
    gl_Position = u_transform * vec4(a_pos, 1.0);
    v_color = a_color;
}

// fragment shader
#version 300 es
precision mediump float;
in vec3 v_color;
out vec4 frag_color;

void main() {
    frag_color = vec4(v_color, 1.0);
}
```

### GLSL 4.1 Core
```glsl
// vertex shader
#version 410 core
layout (location = 0) in vec3 a_pos;
layout (location = 1) in vec3 a_color;

uniform mat4 u_transform;
out vec3 v_color;

void main() {
    gl_Position = u_transform * vec4(a_pos, 1.0);
    v_color = a_color;
}

// fragment shader
#version 410 core
in vec3 v_color;
out vec4 frag_color;

void main() {
    frag_color = vec4(v_color, 1.0);
}
```

### GLSL 4.6 with UBO
```glsl
// vertex shader
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

// fragment shader
#version 460 core
in vec3 v_color;
out vec4 frag_color;

void main() {
    frag_color = vec4(v_color, 1.0);
}
```
