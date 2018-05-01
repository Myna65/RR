#ifndef EXCEPTION_NOTIMPLEMENTED_H
#define EXCEPTION_NOTIMPLEMENTED_H

#include <exception>
#include <string>

class NotImplemented : public std::exception {

private:
    std::string message;

public:
    explicit NotImplemented(const std::string& name);
    const char * what () const noexcept override;

};

#endif //EXCEPTION_NOTIMPLEMENTED_H
