/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include <vector>
#include <iostream>

#include "Menu.hpp"

using namespace std;

Menu::Menu(string title, vector<string> options) {
    this->title = title;
    this->options = options;
}

const int Menu::getChoice() {
    int result = -1;
    int auxiliar;
    string buffer;

    auto scan = options.begin();

    while ((result < 0) || (result > options.size() - 1)) {
        scan = options.begin();
        auxiliar = 0;
        cout << "\n------------------------------\n" << title << "\n------------------------------\n";

        while (scan != options.end()) {
            cout << auxiliar << ". " << *scan << "\n";
            scan++;
            auxiliar++;
        }

        cout << "------------------------------\n" << "Escolha entre 0 e " << (auxiliar - 1)
             << "\n------------------------------\n";
        buffer = "0";
        getline(cin, buffer);
        result = stoi(buffer);
    }

    return (result);
}


/* fim de arquivo */