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

Menu::Menu(string titulo, vector<string> opcoes) {
    this->titulo = titulo;
    this->opcoes = opcoes;
};

const int Menu::getEscolha() {
    int result = -1;
    int auxiliar;
    string buffer;

    auto scan = opcoes.begin();

    while ((result < 0) || (result > opcoes.size() - 1)) {
        scan = opcoes.begin();
        auxiliar = 0;
        cout << "\n------------------------------\n" << titulo << "\n------------------------------\n";

        while (scan != opcoes.end()) {
            cout << auxiliar << ". " << *scan << "\n";
            scan++;
            auxiliar++;
        };

        cout << "------------------------------\n" << "Escolha entre 0 e " << (auxiliar - 1)
             << "\n------------------------------\n";
        buffer = "0";
        getline(cin, buffer);
        result = stoi(buffer);
    };

    return (result);
};


/* fim de arquivo */