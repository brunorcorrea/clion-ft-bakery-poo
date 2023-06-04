//
// Created by corre on 6/2/2023.
//

#include <string>
#include "PilsenBeer.hpp"

using namespace std;

PilsenBeer::PilsenBeer(string tipo, double teorAlcoolico, string marca, double volume, double valor) : Beer(
        teorAlcoolico, marca, volume, valor) {
    this->tipo = tipo;
};

string PilsenBeer::getDescricao() {
    return ("Cerveja Pilsen " + tipo + " " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) +
            " L.");
};
