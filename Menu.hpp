/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include <vector>

using namespace std;

class Menu {
private:
    string title;
    vector<string> options;

public:
    Menu(string, vector<string>);

    const virtual int getChoice();
};

#endif

/* fim de arquivo */