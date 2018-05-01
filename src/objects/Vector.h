#ifndef _3D_VECTOR_H
#define _3D_VECTOR_H


namespace RR::Objects {

    struct Vector {
        float x, y, z;

        inline Vector operator-(const Vector &other) const {
            return Vector{x - other.x, y - other.y, z - other.z};
        }

        inline Vector operator^(const Vector &other) const {
            return Vector{y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x};
        }
    };

}

#endif //_3D_VECTOR_H
