#ifndef LOADERS_RESOURCE_H
#define LOADERS_RESOURCE_H

#include <string>
#include <fstream>
#include <memory>

class Resource {

public:

    virtual std::string getName() const = 0;
    virtual unsigned long getSize() const = 0;
    virtual std::unique_ptr<std::istream> getContent() const = 0;
    virtual ~Resource() = default;
};

#endif //LOADERS_RESOURCE_H
