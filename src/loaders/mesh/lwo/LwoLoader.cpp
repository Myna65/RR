#include "LwoLoader.h"

#include <string>
#include <vector>
#include <iostream>

#include "../../../exception/NotImplemented.h"
#include "../../../exception/InvalidMagicNumber.h"
#include "../../../objects/Point.h"
#include "../../../objects/Polygon.h"
#include "../../../objects/Surface.h"
#include "../../../objects/Mesh.h"
#include "../../../util/BinaryReader.h"

std::unique_ptr<RR::Objects::Mesh> LwoLoader::load(const std::shared_ptr<const Resource> resource) {

    auto mesh = std::make_unique<RR::Objects::Mesh>();

    //mesh.name = resource->getName();

    auto content = resource->getContent();
    content->seekg(0);

    char magic[5];

    content->read(magic, 4);
    magic[4] = '\0';

    if (std::string(magic) != "FORM") {
        throw InvalidMagicNumber(resource->getName(), "FORM", magic);
    }

    BinaryReader<uint32_t>::ReadBigEndian(*content);

    content->read(magic, 4);
    magic[4] = '\0';
    if (std::string(magic) != "LWOB") {
        throw InvalidMagicNumber(resource->getName(), "LWOB", magic);
    }

    std::vector<std::shared_ptr<RR::Objects::Point>> points;
    std::vector<std::string> surfaceNames;
    std::map<std::string, std::shared_ptr<RR::Objects::Surface>> surfaces;

    auto chunks = parseIFF<uint32_t>(*content);

    {

        auto pntsIt = chunks.equal_range("PNTS");

        for (auto &chunk = pntsIt.first; chunk != pntsIt.second; chunk++) {

            auto &stream = chunk->second;

            auto size = stream.str().length();

            for (unsigned i = 0; i < size; i++) {
                auto point = std::make_shared<RR::Objects::Point>();

                point->x = BinaryReader<float>::ReadBigEndian(stream);
                point->y = BinaryReader<float>::ReadBigEndian(stream);
                point->z = BinaryReader<float>::ReadBigEndian(stream);

                points.push_back(point);
                mesh->addPoint(point);
            }

        }
    }

    {
        auto srfsIt = chunks.equal_range("SRFS");

        for (auto &chunk = srfsIt.first; chunk != srfsIt.second; chunk++) {

            auto &stream = chunk->second;

            while (true) {
                std::string name;

                std::getline(stream, name, '\0');

                if (stream.eof()) {
                    break;
                }

                if (name.length() % 2 == 0) {
                    stream.seekg(1, std::ios::cur);
                }

                surfaceNames.push_back(name);
            }

        }
    }

    {
        auto surfIt = chunks.equal_range("SURF");

        std::set<std::string> names;

        for (auto &chunk = surfIt.first; chunk != surfIt.second; chunk++) {

            auto &stream = chunk->second;

            auto surface = std::make_shared<RR::Objects::Surface>();

            std::getline(stream, surface->name, '\0');

            if (surface->name.length() % 2 == 0) {
                stream.seekg(1, std::ios::cur);
            }

            auto subChunks = parseIFF<uint16_t>(stream);

            {
                auto colrIt = subChunks.equal_range("COLR");

                for (auto &subChunk = colrIt.first; subChunk != colrIt.second; subChunk++) {

                    surface->color.red = BinaryReader<unsigned char>::ReadNative(subChunk->second);
                    surface->color.green = BinaryReader<unsigned char>::ReadNative(subChunk->second);
                    surface->color.blue = BinaryReader<unsigned char>::ReadNative(subChunk->second);
                }
            }

            {
                auto timgIt = subChunks.equal_range("TIMG");

                for (auto &subChunk = timgIt.first; subChunk != timgIt.second; subChunk++) {

                    std::string textureFullPath;
                    std::getline(subChunk->second, textureFullPath, '\0');
                    surface->texture = textureFullPath.substr(textureFullPath.find_last_of('\\') + 1);
                }
            }

            surfaces.insert(std::make_pair(surface->name, surface));

            mesh->addSurface(surface);

            for(auto& sc : subChunks) {
                names.insert(sc.first);
            }

        }

        for(auto& sc : names) {
            std::cout << sc << std::endl;
        }
    }

    {
        auto polsIt = chunks.equal_range("POLS");

        for (auto &chunk = polsIt.first; chunk != polsIt.second; chunk++) {

            auto &stream = chunk->second;

            while (true) {
                auto polyLength = BinaryReader<uint16_t>::ReadBigEndian(stream);

                if (stream.eof()) {
                    break;
                }

                auto polygon = std::make_shared<RR::Objects::Polygon>();

                for (uint16_t i = 0; i < polyLength; i++) {
                    auto index = BinaryReader<uint16_t>::ReadBigEndian(stream);
                    polygon->points.push_back(points.at(index));
                }

                auto surface = BinaryReader<uint16_t>::ReadBigEndian(stream);

                if (surface < 0) {
                    throw NotImplemented("Detail Polygon");
                }

                polygon->surface = surfaces[surfaceNames[surface - 1]];

                mesh->addPolygon(polygon);

            }

        }
    }

    for(auto& surface : surfaces) {
        std::cout << surface.second->name << " " << surface.second->texture << std::endl;
    }

    return mesh;

}
