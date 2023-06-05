//
// Created by corre on 6/2/2023.
//

#ifndef A02EX03_F_H
#define A02EX03_F_H

#include <string>
#include "Food.hpp"

using namespace std;

class Cheese : public Food {
private:
    string tipo;
    float peso;

public:
    Cheese(string, float, double);

    string getDescricao();
};

#endif
