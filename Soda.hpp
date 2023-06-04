/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef SODA_H
#define SODA_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Soda : public Liquid {
private:
    string sabor;

public:
    Soda(string, string, double, double);

    virtual string getDescricao();
};

#endif

/* fim de arquivo */