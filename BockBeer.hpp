//
// Created by corre on 6/2/2023.
//

#ifndef BOCK_BEER_HPP
#define BOCK_BEER_HPP

#include <string>
#include "Beer.hpp"

using namespace std;

class BockBeer : public Beer {
private:
    string type;

public:
    BockBeer(string, double, string, double, double);

    string getDescription();
};

#endif
