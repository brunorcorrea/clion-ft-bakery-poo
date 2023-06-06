//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Food.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(string type, float weight, double cost) : Food(cost) {
    this->type = type;
    this->weight = weight;
}

string Cheese::getDescription() {
    return ("Queijo " + type + " - " + to_string(weight) + " Kg.");
}
