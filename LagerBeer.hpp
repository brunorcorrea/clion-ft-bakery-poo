/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef LAGER_BEER_H
#define LAGER_BEER_H

#include <string>
#include "Beer.hpp"

using namespace std;

class LagerBeer : public Beer {
private:
    string estilo;

public:
    LagerBeer(string, double, string, double, double);

    string getDescricao();
};

#endif

/* fim de arquivo */