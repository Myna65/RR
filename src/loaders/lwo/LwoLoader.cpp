#include "LwoLoader.h"

#include <string>

#include "../../exception/InvalidMagicNumber.h"
#include "../../3d/Point.h"
#include "../../3d/Triangle.h"
#include "../../3d/Surface.h"
#include "../../3d/Mesh.h"
#include "../../util/BinaryReader.h"

Mesh LwoLoader::load(const std::shared_ptr<Resource> resource) {

    Mesh mesh;

    mesh.name = resource->getName();

    auto content = resource->getContent();
    content->seekg(0);

    char magic[5];

    content->read(magic, 4);
    magic[4] = '\0';

    if(std::string(magic) != "FORM") {
        throw InvalidMagicNumber(resource->getName(), "FORM", magic);
    }

    uint32_t length = BinaryReader::ReadBigEndianUInt32(*content);

    content->read(magic, 4);
    magic[4] = '\0';
    if(std::string(magic) != "LWOB") {
        throw InvalidMagicNumber(resource->getName(), "LWOB", magic);
    }

    uint32_t chunkPos = 4;

    while(chunkPos != length) {
        content->read(magic, 4);
        magic[4] = '\0';
        uint32_t chunkLength = BinaryReader::ReadBigEndianUInt32(*content);

        chunkPos += chunkLength+8;

        if(std::string(magic) == "PNTS") {

            uint32_t size = chunkLength/12;
            mesh.points.reserve(size);

            for(uint32_t i = 0; i < size ; i++) {
                Point point;

                point.x = BinaryReader::ReadBigEndianFloat(*content);
                point.y = BinaryReader::ReadBigEndianFloat(*content);
                point.z = BinaryReader::ReadBigEndianFloat(*content);

                mesh.points.push_back(point);
            }

        } else if(std::string(magic) == "POLS") {

            uint32_t pos = 0;

            while(pos != chunkLength) {
                uint32_t polyLength = BinaryReader::ReadBigEndianUInt16(*content);
                pos += 2*polyLength + 4;

                if(polyLength < 2) {
                    content->seekg(2*polyLength+2, std::ios::cur);
                } else {

                    auto points = new uint16_t[polyLength];


                    for(uint16_t i = 0; i < polyLength; i++) {
                        points[i] = BinaryReader::ReadBigEndianUInt16(*content);
                    }

                    uint16_t surface = BinaryReader::ReadBigEndianUInt16(*content);

                    for(uint16_t i = 2; i < polyLength; i++) {
                        mesh.triangles.push_back(Triangle{points[0], points[i-1], points[i], surface});
                    }

                    delete[] points;
                }
            }

        } else if(std::string(magic) == "SURF") {

            uint32_t subChunkPos = 0;

            Surface surface;

            std::getline(*content, surface.name, '\0');
            subChunkPos+=surface.name.length()+1;

            if(surface.name.length() % 2 == 0) {
                subChunkPos+=1;
                content->seekg(1, std::ios::cur);
            }

            while(subChunkPos != chunkLength) {

                content->read(magic, 4);
                uint16_t subChunkLength = BinaryReader::ReadBigEndianUInt16(*content);

                subChunkPos += subChunkLength + 6;

                if (std::string(magic) == "COLR") {
                    surface.color.red = BinaryReader::ReadUInt8(*content);
                    surface.color.green = BinaryReader::ReadUInt8(*content);
                    surface.color.blue = BinaryReader::ReadUInt8(*content);
                    content->seekg(1, std::ios::cur);
                } else if (std::string(magic) == "TIMG") {
                    std::string textureFullPath;
                    std::getline(*content, textureFullPath, '\0');
                    surface.texture = textureFullPath.substr(textureFullPath.find_last_of("\\")+1);
                    if(textureFullPath.length() % 2 == 0) {
                        content->seekg(1, std::ios::cur);
                    }
                } else {
                    content->seekg(subChunkLength, std::ios::cur);
                }
            }

            mesh.surfaces.push_back(surface);

        } else {
            content->seekg(chunkLength, std::ios::cur);
        }
    }

    return mesh;

}