//
// Created by corre on 6/2/2023.
//

#include <string>
#include <utility>
#include "Beer.hpp"

using namespace std;

Beer::Beer(double alcoholContent, string brand, double volume, double cost) : Liquid(std::move(brand), volume, cost) {
    this->alcoholContent = alcoholContent;
}

string Beer::getDescription() {
    return ("Cerveja " + brand + " " + to_string(alcoholContent) + "% - " + to_string(volume) + " L.");
}
