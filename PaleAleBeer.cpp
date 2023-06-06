//
// Created by mitsuo on 6/1/2023.
//

#include <string>
#include "PaleAleBeer.hpp"

using namespace std;

PaleAleBeer::PaleAleBeer(string packaging, double alcoholContent, string brand, double volume, double cost) : Beer(
        alcoholContent, brand, volume, cost) {
    this->packaging = packaging;
};

string PaleAleBeer::getDescription() {
    return ("Cerveja Pale Ale " + packaging + " " + brand + " " + to_string(alcoholContent) + "% - " +
            to_string(volume) + " L.");
};
