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
    bool open;

public:
    explicit WadFile(const std::string& name);
    bool hasResources(const std::string& name) override;
    std::shared_ptr<Resource> getResource(const std::string& name) override;
    void close() override;
    ~WadFile() override = default;
};


#endif //LOADERS_WAD_WAD_FILE_H
