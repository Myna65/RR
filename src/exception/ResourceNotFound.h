#ifndef EXCEPTION_RESOURCE_NOT_FOUND_H
#define EXCEPTION_RESOURCE_NOT_FOUND_H

#include <exception>
#include <string>

class ResourceNotFound : public std::exception {

private:
    std::string message;

public:
    explicit ResourceNotFound(const std::string& name);
    const char * what () const noexcept override;

};


#endif //EXCEPTION_RESOURCE_NOT_FOUND_H
