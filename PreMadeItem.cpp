#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "PreMadeItem.h"

using namespace std;

PreMadeItem::PreMadeItem(string name, string size):IceCreamItem(size){
    this->name = name;
    this->size = size;
    if(size == "small")
    {
        price = 4.0;        
    }
    if(size == "medium")
    {
        price = 6.0;
    }
    if(size == "large")
    {
        price = 7.5;
    }
}
PreMadeItem::~PreMadeItem(){}
double PreMadeItem::getPrice(){        
    return price;  
}
string PreMadeItem::composeItem(){
    stringstream ss;
    ss<< "Pre-made Size: "<<size<<"\n";        
    ss<< "Pre-made Item: "<<name<<"\n";
    ss<<"Price: $"<<fixed<<setprecision(2)<<price<<"\n";
    return ss.str();
}



