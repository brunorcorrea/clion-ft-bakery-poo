//
// Created by corre on 6/2/2023.
//

#ifndef PALE_ALE_BEER_HPP
#define PALE_ALE_BEER_HPP

#include <string>
#include "Beer.hpp"

using namespace std;

class PaleAleBeer : public Beer {
private:
    string packaging;

public:
    PaleAleBeer(string, double, string, double, double);

    string getDescription();
};

#endif
