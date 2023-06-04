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

class Liquid : Food {
protected:
    string marca;
    double volume;

public:
    Liquid(string, int, double);

    virtual double getVolume();

    string getMarca();

//    virtual string getDescricao() = 0; TODO is it necessary?
};

#endif

/* fim de arquivo */