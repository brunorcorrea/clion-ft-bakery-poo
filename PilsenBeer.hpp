//
// Created by nicolas on 6/1/2023.
//

#ifndef PILSEN_BEER_HPP
#define PILSEN_BEER_HPP

#include <string>
#include "Beer.hpp"

using namespace std;

class PilsenBeer : public Beer {
private:
    string type;

public:
    PilsenBeer(string, double, string, double, double);

    string getDescription() override;
};

#endif
