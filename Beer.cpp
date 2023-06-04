/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_f.hpp"
#include "Milk.hpp"
#include "Water.hpp"
#include "Soda.hpp"
#include "Beer.hpp"

using namespace std;

Beer::Beer(double teorAlcoolico, string marca, double volume, double valor) : Liquid(marca, volume, valor) {
    this->teorAlcoolico = teorAlcoolico;
};

string Beer::getDescricao() {
    return ("Cerveja " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) + " L.");
};

/* fim de arquivo */