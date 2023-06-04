//
// Created by corre on 6/2/2023.
//

#ifndef A02EX03_G_H
#define A02EX03_G_H

#include <string>
#include "a02ex03_b.hpp"

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
