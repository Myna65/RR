#ifndef OGRE_OGRE_APPLICATION_H
#define OGRE_OGRE_APPLICATION_H

#include <string>
#include <memory>
#include <chrono>

#include <OgreRoot.h>
#include <OgreRenderWindow.h>

#include "SDLWindow.h"


class Application {

public:
    Application(const std::string &windowTitle);
    bool running();
    void renderFrame(std::chrono::nanoseconds timeElapsed);

private:
    std::unique_ptr<SDLWindow> window;

};




#endif //OGRE_OGRE_APPLICATION_H
