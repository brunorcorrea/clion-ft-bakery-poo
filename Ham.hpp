//
// Created by corre on 6/2/2023.
//

#ifndef A02EX03_H_H
#define A02EX03_H_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Ham : public Food {
private:
    string tipo;
    float peso;

public:
    Ham(string, float, double);

    string getDescricao();
};

#endif
