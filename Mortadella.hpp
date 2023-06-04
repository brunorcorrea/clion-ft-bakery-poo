//
// Created by corre on 6/2/2023.
//

#ifndef A02EX03_I_H
#define A02EX03_I_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Mortadella : public Food {
private:
    string tipo;
    float peso;

public:
    Mortadella(string, float, double);

    string getDescricao();
};

#endif
