#ifndef _3D_TRIANGLE_H
#define _3D_TRIANGLE_H

#include <cinttypes>
#include <list>
#include <memory>

#include "../objects/Point.h"
#include "../objects/Surface.h"

namespace RR::Objects {

    struct Polygon {
        std::list<std::shared_ptr<Point>> points;
        std::shared_ptr<Surface> surface;
    };

}

#endif //_3D_TRIANGLE_H
