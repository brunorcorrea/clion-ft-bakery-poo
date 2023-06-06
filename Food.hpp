/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef FOOD_HPP
#define FOOD_HPP

#include <string>

using namespace std;

class Food {
protected:
    double cost;

public:
    Food(double);

    virtual double getCost();

    virtual string getDescription() = 0;

    virtual ~Food() = 0;
};

#endif

/* fim de arquivo */