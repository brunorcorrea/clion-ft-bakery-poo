//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Soda.hpp"

using namespace std;

Soda::Soda(string sabor, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->sabor = sabor;
};

string Soda::getDescricao() {
    return (marca + " " + sabor + " - " + to_string(volume) + " L.");
};
