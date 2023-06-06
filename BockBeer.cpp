//
// Created by nicolas on 6/1/2023.
//

#include <string>
#include "BockBeer.hpp"

using namespace std;

BockBeer::BockBeer(string type, double alcoholContent, string brand, double volume, double cost) : Beer(alcoholContent,
                                                                                                        brand, volume,
                                                                                                        cost) {
    this->type = type;
};

string BockBeer::getDescription() {
    return ("Cerveja Bock " + type + " " + brand + " " + to_string(alcoholContent) + "% - " + to_string(volume) + " L.");
};
