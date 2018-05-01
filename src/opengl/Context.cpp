#include "Context.h"

#include <glm/glm.hpp>

#include "../exception/ContextCreationException.h"

Context::Context(const std::string& title, Options options) {

    if(!glfwInit()) {
        throw ContextCreationException("Failed to initialize GLFW");
    }

    glfwWindowHint(GLFW_SAMPLES, options.fsaa);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    window = glfwCreateWindow(options.width, options.height, title.c_str(), NULL, NULL);
    if(window == nullptr) {
        throw ContextCreationException("Failed to open GLFW window.");
    }

    glfwMakeContextCurrent(window);
    glewExperimental = true;

    if(glewInit() != GLEW_OK) {
        throw ContextCreationException("Failed to initialize GLEW.");
    }

    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

}

Context::~Context() {
    glfwTerminate();
}

void Context::close() {
    closed = true;
}

bool Context::isClosed() {
    return closed;
}

void Context::swapBuffersAndPollEvents() {
    glfwSwapBuffers(window);
    glfwPollEvents();

    if(glfwWindowShouldClose(window)) {
        closed = true;
    }

}



