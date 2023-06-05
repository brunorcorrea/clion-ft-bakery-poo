//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Food.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(string tipo, float peso, double valor) : Food(valor) {
    this->tipo = tipo;
    this->peso = peso;
};

string Cheese::getDescricao() {
    return ("Queijo " + tipo + " - " + to_string(peso) + " Kg.");
};
