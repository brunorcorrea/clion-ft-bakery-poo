//
// Created by mitsuo on 6/1/2023.
//

#include <string>
#include <utility>
#include "LagerBeer.hpp"

using namespace std;

LagerBeer::LagerBeer(string style, double alcoholContent, string brand, double volume, double cost) : Beer(
        alcoholContent, std::move(brand), volume, cost) {
    this->style = std::move(style);
}

string LagerBeer::getDescription() {
    return ("Cerveja Lager " + style + " " + brand + " " + to_string(alcoholContent) + "% - " + to_string(volume) +
            " L.");
}
