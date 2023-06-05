/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef CRACKER_HPP
#define CRACKER_HPP

#include <string>
#include "Food.hpp"

using namespace std;

class Cracker : public Food {
private:
    string tipo;
    int unidades;

public:
    Cracker(string, int, double);

    virtual string getDescricao();
};

#endif

/* fim de arquivo */