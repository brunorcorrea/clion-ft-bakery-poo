//
// Created by corre on 6/2/2023.
//

#ifndef PILSEN_BEER_H
#define PILSEN_BEER_H

#include <string>
#include "Beer.hpp"

using namespace std;

class PilsenBeer : public Beer {
private:
    string tipo;

public:
    PilsenBeer(string, double, string, double, double);

    string getDescricao();
};

#endif
