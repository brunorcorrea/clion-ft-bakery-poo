//
// Created by corre on 6/2/2023.
//

#ifndef HAM_HPP
#define HAM_HPP

#include <string>
#include "Food.hpp"

using namespace std;

class Ham : public Food {
private:
    string tipo;
    float peso;

public:
    Ham(string, float, double);

    string getDescricao();
};

#endif
