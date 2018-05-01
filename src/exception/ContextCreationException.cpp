#include "ContextCreationException.h"

#include <sstream>

ContextCreationException::ContextCreationException() : ContextCreationException("") {
}

ContextCreationException::ContextCreationException(const std::string &_message) {

    std::ostringstream oss;

    oss << "An error occurred during the initialization of the graphic context." << std::endl;
    if(!_message.empty()) {
        oss << _message << std::endl;
    }

    message = oss.str();

}

const char *ContextCreationException::what() const noexcept {
    return message.c_str();
}


