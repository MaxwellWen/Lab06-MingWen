//MingWen 5961578

#include "PreMadeItem.h"
#include "IceCreamItem.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

PreMadeItem::PreMadeItem(string name, string size) : IceCreamItem(size){
    this->size =size;
    price = 0.0;
    if (size == "small"){
        price += 4.0;
    }else if(size == "medium"){
        price += 6.0;
    }else if(size == "large"){
        price += 7.5;
    }
    premadeitem = name;
}

PreMadeItem::~PreMadeItem(){
}

string PreMadeItem::composeItem(){
    string out = "";
    out += "Pre-made Size: ";
    out += size + "\n";
    out += "Pre-made Item: ";
    out += premadeitem + "\n";
    stringstream stream;
    stream << fixed << setprecision(2)<<price;
    out += "Price: $" + stream.str() + "\n";
    return out;
}

double PreMadeItem::getPrice(){
    return price;
}

