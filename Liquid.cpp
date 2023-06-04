//
// Created by corre on 6/2/2023.
//

#include <string>
#include "a02ex03_b.hpp"
#include "Liquid.hpp"

using namespace std;

Liquid::Liquid(string marca, double volume, double valor) : Food(valor) {
    this->volume = volume;
    this->marca = marca;
}
