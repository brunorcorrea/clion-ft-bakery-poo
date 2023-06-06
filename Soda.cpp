//
// Created by corre on 6/2/2023.
//

#include <string>
#include <utility>
#include "Soda.hpp"

using namespace std;

Soda::Soda(string flavour, string brand, double volume, double cost) : Liquid(std::move(brand), volume, cost) {
    this->flavour = std::move(flavour);
}

string Soda::getDescription() {
    return (brand + " " + flavour + " - " + to_string(volume) + " L.");
}
