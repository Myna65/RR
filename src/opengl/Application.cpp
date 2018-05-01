#include "Application.h"

#include <thread>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Options.h"
#include "Context.h"
#include "../loaders/wad/WadFile.h"
#include "Mesh.h"
#include "Scene.h"

Application::Application(const std::string &windowTitle) {

    Options options{};
    options.vSync = false;
    options.fsaa = 4;
    options.width = 800;
    options.height = 600;
    options.gamma = true;
    options.fullScreen = false;

    std::string vertexShader =
#include "../shaders/vertex.vs"
    ;

    std::string fragmentShader =
#include "../shaders/fragment.fs"
    ;

    window = std::make_unique<Context>(windowTitle.c_str(), options);

    program = std::make_unique<Program>(vertexShader, fragmentShader);

    camera = std::make_unique<Camera>(glm::vec3(30,30,30), glm::vec3(0,0,0), glm::vec3(0,1,0), glm::radians(70.0f), 4.0/3.0, .1f, 100.f);

    scene = std::make_unique<Scene>(*program, *camera);
}

bool Application::running() {
    return !window->isClosed();
}

void Application::renderFrame(std::chrono::nanoseconds timeElapsed) {
    auto frameInterval = std::chrono::milliseconds(20);
    if(timeElapsed < frameInterval ) {
        std::this_thread::sleep_for(frameInterval - timeElapsed);
    }
    glClearColor(0.0f, 0.0f, 0.4f, 0.0f);
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    scene->render();
    window->swapBuffersAndPollEvents();
}
