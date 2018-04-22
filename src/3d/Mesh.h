#ifndef _3D_MESH_H
#define _3D_MESH_H

#include <vector>

#include "Point.h"
#include "Triangle.h"
#include "Surface.h"

struct Mesh {

    std::string name;
    std::vector<Point> points;
    std::vector<Triangle> triangles;
    std::vector<Surface> surfaces;

};

#endif //_3D_MESH_H