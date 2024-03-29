/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include <utility>
#include "Food.hpp"
#include "Bread.hpp"

using namespace std;

Bread::Bread(string type, float weight, double cost) : Food(cost) {
    this->type = std::move(type);
    this->weight = weight;
}

string Bread::getDescription() {
    return ("Pao " + type + " - " + to_string(weight) + " Kg.");
}

/* fim de arquivo */