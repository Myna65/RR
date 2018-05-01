#include "Mesh.h"

namespace RR::Objects {

    void Mesh::addPoint(std::shared_ptr<Point> point) {
        points.insert(point);
    }

    void Mesh::addPolygon(std::shared_ptr<Polygon> polygon) {
        polygons.insert(polygon);
    }

    void Mesh::addSurface(std::shared_ptr<Surface> surface) {
        surfaces.insert(surface);
    }

    const std::set<std::shared_ptr<Point>> &Mesh::getPoints() const {
        return points;
    }

    const std::set<std::shared_ptr<Polygon>> &Mesh::getPolygons() const {
        return polygons;
    }

}

