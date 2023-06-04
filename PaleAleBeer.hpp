//
// Created by corre on 6/2/2023.
//

#ifndef PALE_ALE_BEER_H
#define PALE_ALE_BEER_H

#include <string>
#include "Beer.hpp"

using namespace std;

class PaleAleBeer : public Beer {
private:
    string tipoEmbalagem;

public:
    PaleAleBeer(string, double, string, double, double);

    string getDescricao();
};

#endif
