//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Food.hpp"
#include "Liquid.hpp"

using namespace std;

Liquid::Liquid(string brand, double volume, double cost) : Food(cost) {
    this->volume = volume;
    this->brand = brand;
}
