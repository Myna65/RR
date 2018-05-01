#ifndef OPENGL_RESOURCE_MANAGER_H
#define OPENGL_RESOURCE_MANAGER_H

#include "../managers/ResourceManager.h"
#include "Mesh.h"
#include "MeshConverter.h"

namespace RR::OpenGL {
    class ResourceManager : public RR::Managers::ResourceManager<OpenGL::Mesh, OpenGL::MeshConverter> {

    };
}


#endif //OPENGL_RESOURCE_MANAGER_H
