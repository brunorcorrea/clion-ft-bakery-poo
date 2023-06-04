//
// Created by corre on 6/2/2023.
//

#include <string>
#include "LagerBeer.hpp"

using namespace std;

LagerBeer::LagerBeer(string estilo, double teorAlcoolico, string marca, double volume, double valor) : Beer(
        teorAlcoolico, marca, volume, valor) {
    this->estilo = estilo;
};

string LagerBeer::getDescricao() {
    return ("Cerveja Lager " + estilo + " " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) +
            " L.");
};
