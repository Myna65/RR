#ifndef LOADERS_RESOURCES_PROVIDER_H
#define LOADERS_RESOURCES_PROVIDER_H

#include <string>
#include <vector>

#include "Resource.h"

class ResourcesProvider {

public:

    virtual bool hasResources(const std::string& name) = 0;
    virtual std::shared_ptr<Resource> getResource(const std::string& name) = 0;
    virtual void close() = 0;
    virtual ~ResourcesProvider() = default;
};


#endif //LOADERS_RESOURCES_PROVIDER_H
