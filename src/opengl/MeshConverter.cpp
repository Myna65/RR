#include "MeshConverter.h"

#include <iostream>
#include <map>

namespace RR::OpenGL {

    std::unique_ptr<Mesh> MeshConverter::convert(std::unique_ptr<const RR::Objects::Mesh> mesh) {

        auto vertices = std::make_unique<std::vector<float>>();
        auto indices = std::make_unique<std::vector<unsigned short>>();
        auto colors = std::make_unique<std::vector<unsigned char>>();

        unsigned short counter = 0;

        for (auto &polygon: mesh->getPolygons()) {

            unsigned short first;
            auto firstFilled = false;
            unsigned short previous;
            auto previousFilled = false;
            unsigned short current;

            for (auto &point : polygon->points) {
                vertices->push_back(point->x);
                vertices->push_back(point->y);
                vertices->push_back(point->z);

                colors->push_back(polygon->surface->color.red);
                colors->push_back(polygon->surface->color.green);
                colors->push_back(polygon->surface->color.blue);

                if (!firstFilled) {
                    firstFilled = true;
                    first = counter++;
                } else if (!previousFilled) {
                    previousFilled = true;
                    current = counter++;
                } else {
                    previous = current;
                    current = counter++;
                    indices->push_back(first);
                    indices->push_back(previous);
                    indices->push_back(current);


                }

            }
        }

        vertices->shrink_to_fit();
        indices->shrink_to_fit();

        return std::make_unique<Mesh>(std::move(vertices), std::move(indices), std::move(colors));

    }

}