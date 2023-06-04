/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Beer.hpp"

using namespace std;

Beer::Beer(double teorAlcoolico, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->teorAlcoolico = teorAlcoolico;
};

string Beer::getDescricao() {
    return ("Cerveja " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) + " L.");
};

/* fim de arquivo */