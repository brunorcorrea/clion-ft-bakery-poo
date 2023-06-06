/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <iostream>
#include <utility>
#include "Information.hpp"

using namespace std;

const string Information::institution = "Unicamp - Universidade Estadual de Campinas";
const string Information::dept = "FT - Faculdade de Tecnologia";
const string Information::author = "Prof. Dr. Andre F. de Angelis";
const string Information::date = "Mar/2016";
const string Information::decoration = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

string Information::getInstitution() { return (institution); }

string Information::getDept() { return (dept); }

string Information::getAuthor() { return (author); }

string Information::getDate() { return (date); }

void Information::welcome() {
    welcome("");
}

void Information::welcome(string message) {
    welcome(std::move(message), false);
}

void Information::welcome(string message, bool shortMessage) {
    if (!shortMessage) {
        cout << decoration;
        cout << Information::getInstitution() << "\n" << Information::getDept() << "\n";
        cout << Information::getAuthor() << "\n" << Information::getDate() << "\n";
    }
    cout << decoration;
    cout << message << endl;
}

void Information::bye() {
    cout << decoration;
    cout << Information::getInstitution() << " - " << Information::getDept() << endl;
    cout << decoration;
    cout << "Mission accomplished! \n";
    cout << decoration;
    cout << "\n\n" << endl;
}

void Information::bye(bool shortMessage) {
    if (shortMessage) {
        cout << "Mission accomplished! \n" << endl;
    } else {
        bye();
    }
}

/* fim de arquivo */