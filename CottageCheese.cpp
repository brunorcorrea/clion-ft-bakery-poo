
/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Cheese.hpp"
#include "CottageCheese.hpp"

using namespace std;

CottageCheese::CottageCheese(string tipo, float peso, double valor) : Cheese(tipo, peso, valor) {
    this->tipo = tipo;
    this->peso = peso;
};

string CottageCheese::getDescricao() {
    return ("Queijo cottage " + tipo + " - " + to_string(peso) + " Kg.");
};

/* fim de arquivo */