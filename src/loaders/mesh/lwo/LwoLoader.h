#ifndef LOADERS_LWO_LWO_LOADER_H
#define LOADERS_LWO_LWO_LOADER_H

#include <map>
#include <sstream>

#include "../../../util/BinaryReader.h"
#include "../../../objects/Mesh.h"
#include "../../Resource.h"

class LwoLoader {
private:
    template<typename T> static std::multimap<std::string, std::istringstream> parseIFF(std::istream &file);

public:
    static std::unique_ptr<RR::Objects::Mesh> load(std::shared_ptr<const Resource> resource);
};


template<typename T>
std::multimap<std::string, std::istringstream> LwoLoader::parseIFF(std::istream &file) {

    std::multimap<std::string, std::istringstream> chunks;

    char name[5];

    while(true) {

        file.read(name, 4);
        name[4] = '\0';
        T length = BinaryReader<T>::ReadBigEndian(file);

        if(file.eof()) {
            break;
        }

        auto buffer = new char[length];

        file.read(buffer, length);

        auto stream = std::istringstream(std::string(buffer, length));

        chunks.insert(std::make_pair(name, std::move(stream)));

        delete[] buffer;

    }

    return chunks;
}


#endif //LOADERS_LWO_LWO_LOADER_H
