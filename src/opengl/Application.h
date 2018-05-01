#ifndef OGRE_OGRE_APPLICATION_H
#define OGRE_OGRE_APPLICATION_H

#include <string>
#include <memory>
#include <chrono>

#include "Context.h"
#include "Mesh.h"
#include "Program.h"
#include "Scene.h"

class Application {

public:
    Application(const std::string &windowTitle);
    bool running();
    void renderFrame(std::chrono::nanoseconds timeElapsed);

private:
    std::unique_ptr<Context> window;
    std::unique_ptr<Program> program;
    std::unique_ptr<Scene> scene;
    std::unique_ptr<Camera> camera;
};




#endif //OGRE_OGRE_APPLICATION_H
