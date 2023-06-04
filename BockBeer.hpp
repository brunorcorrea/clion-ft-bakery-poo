/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef BOCK_BEER_H
#define BOCK_BEER_H

#include <string>
#include "a02ex03_b.hpp"
#include "Liquid.hpp"
#include "Beer.hpp"

using namespace std;

class BockBeer : public Beer {
private:
    string tipo;

public:
    BockBeer(string, double, string, double, double);

    string getDescricao();
};

#endif

/* fim de arquivo */