#ifndef MANAGERS_RESOURCE_MANAGER_H
#define MANAGERS_RESOURCE_MANAGER_H

#include <string>

#include "../loaders/ResourcesProvider.h"
#include "../loaders/wad/WadFile.h"
#include "../exception/ResourceNotFound.h"

namespace RR::Managers {

    template<class Mesh, class MeshConverter>
    class ResourceManager {

    private:
        std::vector<std::unique_ptr<ResourcesProvider>> providers;
        std::map<std::string, std::shared_ptr<const Mesh>> meshes;

        std::shared_ptr<const Resource> findResource(const std::string& name);

    public:
        ResourceManager();
        void close();

        template<class MeshLoader>
        std::shared_ptr<const Mesh> loadMesh(const std::string &name);


    };

    template<class Mesh, class MeshConverter>
    std::shared_ptr<const Resource> ResourceManager<Mesh, MeshConverter>::findResource(const std::string& name) {

        for(auto& provider: providers) {
            try {
                auto resource = provider->getResource(name);
                return resource;
            } catch (ResourceNotFound &e) {}
        }

        throw ResourceNotFound(name);
    }

    template<class Mesh, class MeshConverter>
    ResourceManager<Mesh, MeshConverter>::ResourceManager() {
        providers.push_back(std::make_unique<WadFile>("LegoRR0.wad"));
    }

    template<class Mesh, class MeshConverter>
    template<class MeshLoader>
    std::shared_ptr<const Mesh> ResourceManager<Mesh, MeshConverter>::loadMesh(const std::string &name) {

        auto it = meshes.find(name);
        if(it != meshes.end()) {
            return it->second;
        }

        std::shared_ptr<Mesh> mesh = MeshConverter::convert(MeshLoader::load(findResource(name)));

        meshes.insert(std::make_pair(name, mesh));

        return mesh;
    }

    template<class Mesh, class MeshConverter>
    void ResourceManager<Mesh, MeshConverter>::close() {
        for(auto& provider: providers) {
            provider->close();
        }
    }


}


#endif //MANAGERS_RESOURCE_MANAGER_H
