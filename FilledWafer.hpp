/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef FILLED_WAFER_HPP
#define FILLED_WAFER_HPP

#include <string>
#include "Cracker.hpp"

using namespace std;

class FilledWafer : public Cracker {
private:
    string recheio;

public:
    FilledWafer(string, string, int, double);

    string getDescricao();
};

#endif

/* fim de arquivo */