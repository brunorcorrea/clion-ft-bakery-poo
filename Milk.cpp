//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Milk.hpp"

using namespace std;

Milk::Milk(string tipo, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->tipo = tipo;
};

string Milk::getDescricao() {
    return ("Leite " + tipo + " " + marca + " - " + to_string(volume) + " L.");
};
