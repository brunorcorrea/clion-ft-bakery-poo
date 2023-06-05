//
// Created by corre on 6/2/2023.
//

#ifndef BEER_HPP
#define BEER_HPP

#include <string>
#include "Liquid.hpp"

using namespace std;

class Beer : public Liquid {
protected:
    double teorAlcoolico;

public:
    Beer(double, string, double, double);

    virtual string getDescricao();
};

#endif
