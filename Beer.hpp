/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef BEER_H
#define BEER_H

#include <string>
#include "a02ex03_b.hpp"
#include "Liquid.hpp"

using namespace std;

class Beer : public Liquid {
protected:
    double teorAlcoolico;

public:
    Beer(double, string, double, double);

    virtual string getDescricao();
};

#endif

/* fim de arquivo */