//Ming Wen 5961578

#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <vector>
#include <string>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem{
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem();
    virtual std::string composeItem();
    virtual double getPrice();

private:
    std::string premadeitem;
};

#endif
