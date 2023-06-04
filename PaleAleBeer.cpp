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
#include "PilsenBeer.hpp"
#include "BockBeer.hpp"
#include "PaleAleBeer.hpp"

using namespace std;

PaleAleBeer::PaleAleBeer(string tipoEmbalagem, double teorAlcoolico, string marca, double volume, double valor) : Beer(teorAlcoolico, marca, volume, valor) {
    this->tipoEmbalagem = tipoEmbalagem;
};

string PaleAleBeer::getDescricao() {
    return ("Cerveja Pale Ale " + tipoEmbalagem + " " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) + " L.");
};

/* fim de arquivo */