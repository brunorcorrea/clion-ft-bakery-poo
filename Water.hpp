//
// Created by corre on 6/2/2023.
//

#ifndef WATER_HPP
#define WATER_HPP

#include <string>
#include "Liquid.hpp"

using namespace std;

class Water : public Liquid {
private:
    string type;

public:
    Water(string, string, double, double);

    string getDescription() override;
};

#endif
