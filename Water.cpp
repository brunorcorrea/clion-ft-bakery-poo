//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Water.hpp"

using namespace std;

Water::Water(string type, string brand, double volume, double cost) : Liquid(brand, volume, cost) {
    this->type = type;
};

string Water::getDescription() {
    return ("Água " + type + " " + brand + " - " + to_string(volume) + " L.");
};
