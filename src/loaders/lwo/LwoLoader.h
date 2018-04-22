#ifndef LOADERS_LWO_LWO_LOADER_H
#define LOADERS_LWO_LWO_LOADER_H

#include "../MeshLoader.h"

class LwoLoader : public MeshLoader {
public:
    Mesh load(const std::shared_ptr<Resource> resource) override;
};


#endif //LOADERS_LWO_LWO_LOADER_H
