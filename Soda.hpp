//
// Created by corre on 6/2/2023.
//

#ifndef SODA_H
#define SODA_H

#include <string>
#include "Liquid.hpp"

using namespace std;

class Soda : public Liquid {
private:
    string sabor;

public:
    Soda(string, string, double, double);

    string getDescricao();
};

#endif
