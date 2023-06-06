//
// Created by corre on 6/2/2023.
//

#ifndef MILK_HPP
#define MILK_HPP

#include <string>
#include "Liquid.hpp"

using namespace std;

class Milk : public Liquid {
private:
    string type;

public:
    Milk(string, string, double, double);

    string getDescription() override;
};

#endif
