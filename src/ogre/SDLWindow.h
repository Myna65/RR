#ifndef PROJECT_SDL_WINDOW_H
#define PROJECT_SDL_WINDOW_H

#include <string>

#include <SDL_video.h>
#include <OgreRenderWindow.h>

#include "Options.h"

class SDLWindow {

private:
    SDL_Window* window;
    std::unique_ptr<Ogre::Root> root;
    Ogre::RenderWindow* renderWindow;
    bool closed;

public:
    SDLWindow(const std::string& title, Options options);
    ~SDLWindow();
    void pollEvents();
    bool isClosed();
    bool isVisible();
    void renderOneFrame();
};


#endif
