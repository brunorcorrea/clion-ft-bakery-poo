//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Food.hpp"
#include "Mortadella.hpp"

using namespace std;

Mortadella::Mortadella(string type, float weight, double cost) : Food(cost) {
    this->type = type;
    this->weight = weight;
};

string Mortadella::getDescription() {
    return ("Mortadela " + type + " - " + to_string(weight) + " Kg.");
};
