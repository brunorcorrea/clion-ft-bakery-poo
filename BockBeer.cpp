//
// Created by corre on 6/2/2023.
//

#include <string>
#include "BockBeer.hpp"

using namespace std;

BockBeer::BockBeer(string tipo, double teorAlcoolico, string marca, double volume, double valor) : Beer(teorAlcoolico,
                                                                                                        marca, volume,
                                                                                                        valor) {
    this->tipo = tipo;
};

string BockBeer::getDescricao() {
    return ("Cerveja Bock " + tipo + " " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) + " L.");
};
