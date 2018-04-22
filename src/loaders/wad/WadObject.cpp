#include "WadObject.h"

#include <sstream>
#include <istream>

WadObject::WadObject(char *data, unsigned long _size) : size(_size), content(std::string(data, _size)) {
}

std::string WadObject::getName() const {
    return name;
}

unsigned long WadObject::getSize() const {
    return size;
}

std::unique_ptr<std::istream> WadObject::getContent() const {
     return std::make_unique<std::istringstream>(content);
}

