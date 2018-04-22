#ifndef LOADERS_MESH_CONVERTER_H
#define LOADERS_MESH_CONVERTER_H

#include "Resource.h"
#include "../3d/Mesh.h"

class MeshLoader {

public:
    virtual Mesh load(const std::shared_ptr<Resource> resource)=0;

};

#endif //LOADERS_MESH_CONVERTER_H
