#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include <map>
#include "IceCreamItem.h"

using namespace std;

class CustomItem : public IceCreamItem {
public:
    CustomItem(string size);
    ~CustomItem();
    void addTopping(string topping);
    double getPrice() override;
    string composeItem() override;

private:
    map<string, int> toppings;
};
#endif
