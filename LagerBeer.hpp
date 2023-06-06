//
// Created by mitsuo on 6/1/2023.
//

#ifndef LAGER_BEER_HPP
#define LAGER_BEER_HPP

#include <string>
#include "Beer.hpp"

using namespace std;

class LagerBeer : public Beer {
private:
    string style;

public:
    LagerBeer(string, double, string, double, double);

    string getDescription() override;
};

#endif
