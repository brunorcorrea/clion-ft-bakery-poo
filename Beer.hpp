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
    double alcoholContent;

public:
    Beer(double, string, double, double);

    string getDescription() override;
};

#endif
