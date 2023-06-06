//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Food.hpp"
#include "Ham.hpp"

using namespace std;

Ham::Ham(string type, float weight, double cost) : Food(cost) {
    this->type = type;
    this->weight = weight;
}

string Ham::getDescription() {
    return ("Presunto " + type + " - " + to_string(weight) + " Kg.");
}
