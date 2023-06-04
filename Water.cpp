//
// Created by corre on 6/2/2023.
//

#include <string>
#include "Water.hpp"

using namespace std;

Water::Water(string nome, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->nome = nome;
};

string Water::getDescricao() {
    return ("Água " + nome + " " + marca + " - " + to_string(volume) + " L.");
};
