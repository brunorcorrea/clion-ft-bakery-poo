//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Beer.hpp"

using namespace std;

Beer::Beer(double alcoholContent, string brand, double volume, double cost) : Liquid(brand, volume, cost) {
    this->alcoholContent = alcoholContent;
};

string Beer::getDescription() {
    return ("Cerveja " + brand + " " + to_string(alcoholContent) + "% - " + to_string(volume) + " L.");
};
