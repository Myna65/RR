#include "Application.h"

#include <thread>

#include <SDL.h>
#include <SDL_syswm.h>

#include "../loaders/wad/WadFile.h"

Application::Application(const std::string &windowTitle) {

    Options options{};
    options.vSync = false;
    options.fsaa = 2;
    options.width = 800;
    options.height = 600;
    options.gamma = true;
    options.fullScreen = false;

    window = std::make_unique<SDLWindow>(windowTitle.c_str(), options);

    ResourcesProvider* loader = new WadFile("LegoRR1.wad");
    loader->getResource("Vehicule");
}

bool Application::running() {
    return !window->isClosed();
}

void Application::renderFrame(std::chrono::nanoseconds timeElapsed) {
    auto frameInterval = std::chrono::milliseconds(20);
    if(timeElapsed < frameInterval ) {
        std::this_thread::sleep_for(frameInterval - timeElapsed);
    }
    window->pollEvents();
    if(window->isVisible()) {
        window->renderOneFrame();
    }
}
