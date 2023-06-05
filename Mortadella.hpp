//
// Created by corre on 6/2/2023.
//

#ifndef MORTADELLA_HPP
#define MORTADELLA_HPP

#include <string>
#include "Food.hpp"

using namespace std;

class Mortadella : public Food {
private:
    string tipo;
    float peso;

public:
    Mortadella(string, float, double);

    string getDescricao();
};

#endif
