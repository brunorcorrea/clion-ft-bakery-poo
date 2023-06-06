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
    string type;
    int amount;

public:
    Cracker(string, int, double);

    virtual string getDescription();
};

#endif

/* fim de arquivo */