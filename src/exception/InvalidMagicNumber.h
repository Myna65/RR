#ifndef EXCEPTION_INVALID_MAGIC_NUMBER_H
#define EXCEPTION_INVALID_MAGIC_NUMBER_H

#include <exception>
#include <string>

class InvalidMagicNumber : public std::exception {

private:
    std::string message;

public:
    InvalidMagicNumber(std::string filename, std::string exceptedValue, std::string gotValue);
    const char * what () const noexcept override;

};


#endif //EXCEPTION_INVALID_MAGIC_NUMBER_H
