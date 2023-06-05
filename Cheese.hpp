//
// Created by corre on 6/2/2023.
//

#ifndef CHEESE_HPP
#define CHEESE_HPP

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
