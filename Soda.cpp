/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Soda.hpp"

using namespace std;

Soda::Soda(string sabor, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->sabor = sabor;
};

string Soda::getDescricao() {
    return (marca + " " + sabor + " - " + to_string(volume) + " L.");
};

/* fim de arquivo */