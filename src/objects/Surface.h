#ifndef _3D_SURFACE_H
#define _3D_SURFACE_H

#include <string>

#include "Color.h"

namespace RR::Objects {

    struct Surface {
        std::string name;
        Color color;
        std::string texture;
    };

}

#endif //_3D_SURFACE_H
