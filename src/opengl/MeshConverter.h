#ifndef OPENGL_MESH_CONVERTER_H
#define OPENGL_MESH_CONVERTER_H

#include <memory>

#include "../objects/Mesh.h"
#include "Mesh.h"

namespace RR::OpenGL {

    class MeshConverter {

    public:
        static std::unique_ptr<Mesh> convert(std::unique_ptr<const RR::Objects::Mesh> resource);

    };

}

#endif //LOADERS_MESH_CONVERTER_H
