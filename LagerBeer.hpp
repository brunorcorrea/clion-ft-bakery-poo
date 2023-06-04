//
// Created by corre on 6/2/2023.
//

#ifndef LAGER_BEER_H
#define LAGER_BEER_H

#include <string>
#include "Beer.hpp"

using namespace std;

class LagerBeer : public Beer {
private:
    string estilo;

public:
    LagerBeer(string, double, string, double, double);

    string getDescricao();
};

#endif
