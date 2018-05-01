#ifndef _3D_MESH_H
#define _3D_MESH_H

#include <set>

#include "Point.h"
#include "Polygon.h"
#include "Surface.h"

namespace RR::Objects {

    struct Mesh {

    private:

        std::string name;
        std::set<std::shared_ptr<Point>> points;
        std::set<std::shared_ptr<Polygon>> polygons;
        std::set<std::shared_ptr<Surface>> surfaces;

    public:

        void addPoint(std::shared_ptr<Point> point);

        void addPolygon(std::shared_ptr<Polygon> polygon);

        void addSurface(std::shared_ptr<Surface> surface);

        const std::set<std::shared_ptr<Point>> &getPoints() const;

        const std::set<std::shared_ptr<Polygon>> &getPolygons() const;

    };

}

#endif //_3D_MESH_H