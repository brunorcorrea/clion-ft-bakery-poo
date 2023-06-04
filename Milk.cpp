/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_f.hpp"
#include "Milk.hpp"

using namespace std;

Milk::Milk(string tipo, string marca, double volume, double valor) : Liquid(marca, volume, valor)
   {
   this->tipo = tipo;
   };
   
string Milk::getDescricao()
   { 
   return ("Leite " + tipo + " " + marca + " - " + to_string(volume) + " L.");
   };
   
/* fim de arquivo */