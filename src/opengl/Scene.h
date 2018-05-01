#ifndef OPENGL_SCENE_H
#define OPENGL_SCENE_H

#include <memory>

#include "Camera.h"
#include "Program.h"
#include "Mesh.h"

class Scene {
private:
    const Program& program;
    const Camera& camera;
    std::shared_ptr<const RR::OpenGL::Mesh> mesh;

public:
    Scene(const Program& program, const Camera& camera);
    void render();
};


#endif //OPENGL_SCENE_H
