#include "NotImplemented.h"

#include <sstream>

const char *NotImplemented::what() const noexcept {
    return message.c_str();
}

NotImplemented::NotImplemented(const std::string &name) {
    std::ostringstream oss;

    oss << name << " is not implemented" << std::endl;

    message = oss.str();
}