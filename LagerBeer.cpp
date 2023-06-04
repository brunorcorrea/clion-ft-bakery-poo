/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "LagerBeer.hpp"

using namespace std;

LagerBeer::LagerBeer(string estilo, double teorAlcoolico, string marca, double volume, double valor) : Beer(
        teorAlcoolico, marca, volume, valor) {
    this->estilo = estilo;
};

string LagerBeer::getDescricao() {
    return ("Cerveja Lager " + estilo + " " + marca + " " + to_string(teorAlcoolico) + "% - " + to_string(volume) +
            " L.");
};

/* fim de arquivo */