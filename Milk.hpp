/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MILK_H
#define MILK_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Milk : public Liquid {
private:
    string tipo;

public:
    Milk(string, string, double, double);

    string getDescricao();
};

#endif

/* fim de arquivo */