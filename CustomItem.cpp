//Ming Wen, 5961578

#include "CustomItem.h"
#include "IceCreamItem.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

CustomItem::CustomItem(string size): IceCreamItem(size){
    this-> size = size;
    this-> price = 0.0;
    if (size=="small"){
        price += 3.0;
    }else if(size=="medium"){
        price += 5.0;
    }else if(size=="large"){
        price += 6.5;
    }
}

CustomItem::~CustomItem(){}

void CustomItem::addTopping(string topping){
    for(size_t i=0;i<toppings.size();i++){
        if(toppings.at(i).first == topping){
            toppings.at(i).second += 1;
            price += 0.4;
            return;
        }
    }
    toppings.push_back(make_pair(topping,1));
    price += 0.4;
    return;
}

string CustomItem::composeItem(){
    string out = "";
    out += "Custom Size: ";
    out += size + "\n";
    out += "Toppings:\n";
    for (size_t i=0; i< toppings.size(); i++){
        out += toppings.at(i).first + ": "+ to_string(toppings.at(i).second)+" oz\n";
    }
    stringstream stream;
    stream << fixed << setprecision(2) <<price;
    out += "Price: $"+ stream.str() + "\n";
    return out;
}



double CustomItem::getPrice(){
    return price;
}
