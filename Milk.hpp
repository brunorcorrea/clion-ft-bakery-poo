//
// Created by corre on 6/2/2023.
//

#ifndef MILK_H
#define MILK_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Milk : public Liquid {
private:
    string tipo;

public:
    Milk(string, string, double, double);

    string getDescricao();
};

#endif
