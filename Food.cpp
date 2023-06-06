/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include "Food.hpp"

using namespace std;

Food::Food(double cost) {
    this->cost = cost;
}

double Food::getCost() {
    return (cost);
}

Food::~Food() = default;

/* fim de arquivo */