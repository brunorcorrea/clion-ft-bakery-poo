/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef WATER_H
#define WATER_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Water : public Liquid {
private:
    string nome;

public:
    Water(string, string, double, double);

    virtual string getDescricao();
};

#endif

/* fim de arquivo */