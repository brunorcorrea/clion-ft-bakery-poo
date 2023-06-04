/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "PaleAleBeer.hpp"

using namespace std;

PaleAleBeer::PaleAleBeer(string tipoEmbalagem, double teorAlcoolico, string marca, double volume, double valor) : Beer(
        teorAlcoolico, marca, volume, valor) {
    this->tipoEmbalagem = tipoEmbalagem;
};

string PaleAleBeer::getDescricao() {
    return ("Cerveja Pale Ale " + tipoEmbalagem + " " + marca + " " + to_string(teorAlcoolico) + "% - " +
            to_string(volume) + " L.");
};

/* fim de arquivo */