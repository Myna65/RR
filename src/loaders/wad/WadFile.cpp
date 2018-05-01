#include "WadFile.h"

#include <fstream>

#include "../../exception/ResourceNotFound.h"
#include "../../exception/InvalidMagicNumber.h"

WadFile::WadFile(const std::string& name) {
    open = true;
    std::ifstream file(name, std::ios::binary);

    if(!file.is_open()) {
        throw std::ios_base::failure("File not found or insufficient permission");
    }

    char magic[5];
    file.read(magic,4);
    magic[4]='\0';

    if (std::string(magic) != "WWAD") {
        throw InvalidMagicNumber(name, "WWAD", magic);
    }

    uint32_t resourcesNumbers;
    file.read(reinterpret_cast<char*>(&resourcesNumbers), sizeof(resourcesNumbers));
    resourcesNames.resize(resourcesNumbers);
    resourcesPaths.resize(resourcesNumbers);

    for(uint32_t i = 0 ; i < resourcesNumbers ; i++) {
        std::getline(file, resourcesNames[i], '\0');
    }

    for(uint32_t i = 0 ; i < resourcesNumbers ; i++) {
        std::getline(file, resourcesPaths[i], '\0');
    }

    auto *filesMetaData = new uint32_t[4 * resourcesNumbers];

    file.read(reinterpret_cast<char *>(filesMetaData), 4 * resourcesNumbers * sizeof(uint32_t));

    for(uint32_t i = 0 ; i < resourcesNumbers ; i++) {
        uint32_t size = filesMetaData[4 * i + 1];
        uint32_t offset = filesMetaData[4 * i + 3];
        auto buffer = new char[size];
        file.seekg(offset);
        file.read(buffer, size);

        auto object = std::make_shared<WadObject>(buffer, size);
        resources.insert(std::make_pair(resourcesNames[i], std::move(object)));
        delete[] buffer;
    }

    delete[] filesMetaData;

}

bool WadFile::hasResources(const std::string& name) {
    return resources.find(name) != resources.end();
}

std::shared_ptr<Resource> WadFile::getResource(const std::string& name) {
    if(!open || !hasResources(name)) {
        throw ResourceNotFound(name);
    }
    return this->resources[name];
}

void WadFile::close() {
    resources.clear();
    open=false;
}