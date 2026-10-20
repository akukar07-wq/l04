#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <string>
#include "IceCreamItem.h"

using namespace std;

class PreMadeItem : public IceCreamItem {
public:
    PreMadeItem(string name, string size);
    ~PreMadeItem();
    double getPrice() override;
    string composeItem() override;

private:
    string name;
};
#endif
