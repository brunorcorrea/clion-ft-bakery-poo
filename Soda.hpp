//
// Created by corre on 6/2/2023.
//

#ifndef SODA_HPP
#define SODA_HPP

#include <string>
#include "Liquid.hpp"

using namespace std;

class Soda : public Liquid {
private:
    string flavour;

public:
    Soda(string, string, double, double);

    string getDescription() override;
};

#endif
