#ifndef _3D_VEC3_H
#define _3D_VEC3_H

#include "Vector.h"

namespace RR::Objects {


    struct Point {
        float x, y, z;

        inline Vector operator-(const Point &other) const {
            return Vector{x - other.x, y - other.y, z - other.z};
        }
    };

}


#endif //_3D_VEC3_H
