/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "Ham.hpp"

using namespace std;

Ham::Ham(string tipo, float peso, double valor) : Food(valor) {
    this->tipo = tipo;
    this->peso = peso;
};

string Ham::getDescricao() {
    return ("Presunto " + tipo + " - " + to_string(peso) + " Kg.");
};

/* fim de arquivo */