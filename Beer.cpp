//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Beer.hpp"

using namespace std;

Beer::Beer(double teorAlcoolico, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->teorAlcoolico = teorAlcoolico;
};

string Beer::getDescricao() {
    return ("Cerveja " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) + " L.");
};
