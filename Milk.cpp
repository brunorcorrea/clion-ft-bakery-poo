//
// Created by corre on 6/2/2023.
//

#include <string>
#include <utility>
#include "Milk.hpp"

using namespace std;

Milk::Milk(string type, string brand, double volume, double cost) : Liquid(std::move(brand), volume, cost) {
    this->type = std::move(type);
}

string Milk::getDescription() {
    return ("Leite " + type + " " + brand + " - " + to_string(volume) + " L.");
}
