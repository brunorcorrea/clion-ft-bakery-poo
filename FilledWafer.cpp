/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Cracker.hpp"
#include "FilledWafer.hpp"

using namespace std;

FilledWafer::FilledWafer(string type, string flavour, int amount, double cost) : Cracker(type, amount, cost) {
    this->flavour = flavour;
}

string FilledWafer::getDescription() {
    return ("Bolacha Recheada com " + flavour + " - " + Cracker::getDescription());
}

/* fim de arquivo */