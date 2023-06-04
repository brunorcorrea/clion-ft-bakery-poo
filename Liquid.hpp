/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef LIQUID_H
#define LIQUID_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Liquid : public Food {
protected:
    string marca;
    double volume;

public:
    Liquid(string, double, double);
};

#endif

/* fim de arquivo */