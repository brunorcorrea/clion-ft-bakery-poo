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
    string type;
    float weight;

public:
    Mortadella(string, float, double);

    string getDescription() override;
};

#endif
