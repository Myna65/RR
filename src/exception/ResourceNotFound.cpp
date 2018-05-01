#include "ResourceNotFound.h"

#include <sstream>

const char *ResourceNotFound::what() const noexcept {
    return message.c_str();
}

ResourceNotFound::ResourceNotFound(const std::string &name) {
    std::ostringstream oss;

    oss << "Resource not found: " << name << std::endl;

    message = oss.str();
}
