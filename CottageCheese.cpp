//
// Created by corre on 6/2/2023.
//

#include <string>
#include <utility>
#include "Cheese.hpp"
#include "CottageCheese.hpp"

using namespace std;

CottageCheese::CottageCheese(string fatContent, string type, float weight, double cost) : Cheese(std::move(type), weight, cost) {
    this->fatContent = std::move(fatContent);
}

string CottageCheese::getDescription() {
return ("Queijo cottage " + type + " " + fatContent + "% de gordura " + " - " + to_string(weight) + " Kg.");
}
