//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Food.hpp"
#include "Ham.hpp"

using namespace std;

Ham::Ham(string tipo, float peso, double valor) : Food(valor) {
    this->tipo = tipo;
    this->peso = peso;
};

string Ham::getDescricao() {
    return ("Presunto " + tipo + " - " + to_string(peso) + " Kg.");
};
