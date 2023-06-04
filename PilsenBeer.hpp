/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef PILSEN_BEER_H
#define PILSEN_BEER_H

#include <string>
#include "a02ex03_b.hpp"
#include "Liquid.hpp"
#include "Beer.hpp"

using namespace std;

class PilsenBeer : public Beer {
private:
    string tipo;

public:
    PilsenBeer(string, double, string, double, double);

    virtual string getDescricao();
};

#endif

/* fim de arquivo */