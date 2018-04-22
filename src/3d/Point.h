#ifndef _3D_VEC3_H
#define _3D_VEC3_H


struct Point {
    float x,y,z;

    inline Point operator-(const Point& other) const {
        return Point{x-other.x, y-other.y, z-other.z};
    }

    inline Point operator^(const Point& other) const {
        return Point{x-other.x, y-other.y, z-other.z};
    }
};


#endif //_3D_VEC3_H
