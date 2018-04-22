#ifndef LOADERS_WAD_WAD_OBJECT_H
#define LOADERS_WAD_WAD_OBJECT_H

#include "../Resource.h"

class WadObject : public Resource {

private:
    std::string name;
    unsigned long size;
    std::string content;
    bool isLoaded = false;

public:
    WadObject() = default;
    WadObject(char* data, unsigned long size);
    std::string getName() const override;
    unsigned long getSize() const override;
    std::unique_ptr<std::istream> getContent() const override;
    ~WadObject() override = default;
};


#endif //LOADERS_WAD_WAD_OBJECT_H
