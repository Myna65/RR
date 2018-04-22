#include "InvalidMagicNumber.h"

#include <sstream>

InvalidMagicNumber::InvalidMagicNumber(std::string filename, std::string exceptedValue, std::string gotValue) {

    std::ostringstream oss;
    oss << "Invalid magic number for file " << filename << ". Expected " << exceptedValue << " got " << gotValue << "." << std::endl;
    message = oss.str();

}

const char* InvalidMagicNumber::what () const noexcept {
    return message.c_str();
}