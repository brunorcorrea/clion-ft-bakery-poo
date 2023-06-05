//
// Created by corre on 6/2/2023.
//

#ifndef LIQUID_H
#define LIQUID_H

#include <string>
#include "Food.hpp"

using namespace std;

class Liquid : public Food {
protected:
    string marca;
    double volume;

public:
    Liquid(string, double, double);
};

#endif
