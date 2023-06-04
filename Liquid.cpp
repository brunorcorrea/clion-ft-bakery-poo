/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "Liquid.hpp"

using namespace std;

Liquid::Liquid(string marca, int volume, double valor) : Food(valor) {
    this->volume = volume;
    this->marca = marca;
}

double Liquid::getVolume() {
    return (volume);
}


string Liquid::getMarca() {
    return (marca);
};



/* fim de arquivo */