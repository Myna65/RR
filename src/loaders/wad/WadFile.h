#ifndef LOADERS_WAD_WAD_FILE_H
#define LOADERS_WAD_WAD_FILE_H

#include <string>
#include <map>
#include <memory>

#include "WadObject.h"
#include "../ResourcesProvider.h"

class WadFile : public ResourcesProvider {

private:
    std::map<std::string, std::shared_ptr<WadObject>> resources;
    std::vector<std::string> resourcesNames;
    std::vector<std::string> resourcesPaths;

public:
    explicit WadFile(const std::string& name);
    const std::vector<std::string>& getAllResourcesNames() override;
    const std::vector<std::string>& getAllResourcesPaths();
    bool hasResources(const std::string& name) override;
    std::shared_ptr<Resource> getResource(const std::string& name) override;
    ~WadFile() override = default;
};


#endif //LOADERS_WAD_WAD_FILE_H
