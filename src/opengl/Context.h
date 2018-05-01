#ifndef PROJECT_SDL_WINDOW_H
#define PROJECT_SDL_WINDOW_H

#include <string>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "Options.h"

class Context {

private:
    GLFWwindow* window;
    bool closed = false;

public:
    Context(const std::string& title, Options options);
    ~Context();
    void close();
    bool isClosed();
    void swapBuffersAndPollEvents();
};


#endif
