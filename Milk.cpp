//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Milk.hpp"

using namespace std;

Milk::Milk(string type, string brand, double volume, double cost) : Liquid(brand, volume, cost) {
    this->type = type;
}

string Milk::getDescription() {
    return ("Leite " + type + " " + brand + " - " + to_string(volume) + " L.");
}
