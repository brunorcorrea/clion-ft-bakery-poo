//
// Created by nicolas on 6/1/2023.
//

#include <string>
#include "PilsenBeer.hpp"

using namespace std;

PilsenBeer::PilsenBeer(string type, double alcoholContent, string brand, double volume, double cost) : Beer(
        alcoholContent, brand, volume, cost) {
    this->type = type;
}

string PilsenBeer::getDescription() {
    return ("Cerveja Pilsen " + type + " " + brand + " " + to_string(alcoholContent) + "% - " + to_string(volume) +
            " L.");
}
