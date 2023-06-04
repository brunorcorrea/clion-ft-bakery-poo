/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef PALE_ALE_BEER_H
#define PALE_ALE_BEER_H

#include <string>
#include "Beer.hpp"

using namespace std;

class PaleAleBeer : public Beer {
private:
    string tipoEmbalagem;

public:
    PaleAleBeer(string, double, string, double, double);

    string getDescricao();
};

#endif

/* fim de arquivo */