//
// Created by mitsuo on 6/1/2023.
//

#include <string>
#include "LagerBeer.hpp"

using namespace std;

LagerBeer::LagerBeer(string style, double alcoholContent, string brand, double volume, double cost) : Beer(
        alcoholContent, brand, volume, cost) {
    this->style = style;
}

string LagerBeer::getDescription() {
    return ("Cerveja Lager " + style + " " + brand + " " + to_string(alcoholContent) + "% - " + to_string(volume) +
            " L.");
}
