/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Water.hpp"

using namespace std;

Water::Water(string nome, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->nome = nome;
};

string Water::getDescricao() {
    return ("Água " + nome + " " + marca + " - " + to_string(volume) + " L.");
};

/* fim de arquivo */