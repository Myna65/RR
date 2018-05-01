#ifndef EXCEPTION_CONTEXT_CREATION_EXCEPTION_H
#define EXCEPTION_CONTEXT_CREATION_EXCEPTION_H

#include <exception>
#include <string>

class ContextCreationException : public std::exception {

private:
    std::string message;

public:
    ContextCreationException();
    explicit ContextCreationException(const std::string& message);
    const char * what () const noexcept override;

};


#endif //EXCEPTION_CONTEXT_CREATION_EXCEPTION_H
