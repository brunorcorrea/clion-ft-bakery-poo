//
// Created by corre on 6/2/2023.
//

#ifndef COTTAGE_CHEESE_HPP
#define COTTAGE_CHEESE_HPP

#include <string>
#include "Food.hpp"

using namespace std;

class CottageCheese : public Cheese {
private:
    string tipo;
    float peso;

public:
    CottageCheese(string, float, double);

    string getDescricao();
};

#endif
