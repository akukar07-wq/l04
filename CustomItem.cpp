#include "CustomItem.h"
#include <sstream>
#include <iomanip>

using namespace std;

CustomItem::CustomItem(string size) : IceCreamItem(size)
{
    if(size == "small"){
        price = 3.0;
    }
    else if(size == "medium"){
        price = 5.0;
    }
    else if(size == "large"){
        price = 6.5;
    }
}

CustomItem::~CustomItem()
{
}
void CustomItem::addTopping(string topping)
{
    toppings[topping]++;
    price += 0.4;
}

double CustomItem::getPrice()
{
    return price;
}

string CustomItem::composeItem()
{
    stringstream ss;
    ss << "Custom Size: " << size << "\nToppings:\n";
    for(const auto& topping : toppings)
    {
        ss << topping.first << ": " << topping.second << " oz\n";
    }
    ss << "Price: $" << fixed << setprecision(2) << price<<"\n";
    return ss.str();
}
