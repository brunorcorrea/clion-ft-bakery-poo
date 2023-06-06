//
// Created by corre on 6/2/2023.
//

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

#include "MyProgram.hpp"
#include "Information.hpp"
#include "MyBoolean.hpp"
#include "Menu.hpp"
#include "Food.hpp"
#include "Bread.hpp"
#include "Cracker.hpp"
#include "FilledWafer.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Ham.hpp"
#include "Mortadella.hpp"
#include "BockBeer.hpp"
#include "LagerBeer.hpp"
#include "PaleAleBeer.hpp"
#include "PilsenBeer.hpp"
#include "Milk.hpp"
#include "Water.hpp"
#include "Soda.hpp"

using namespace std;

void MyProgram::process() {
    vector<string> opcoes({"Exit", "List Database", "Insert Items"});
    Menu menu("Main Menu", opcoes);
    int escolha = -1;

    while (escolha) {
        escolha = menu.getChoice();

        switch (escolha) {
            case 1: {
                listItems();
            };
                break;
            case 2: {
                insertItems();
            };
                break;
        };
    };
};

void MyProgram::clearAll() {
    myMainList.clear();

    auto scan = myMainList.begin();

    while (scan != myMainList.end()) {
        delete (*scan);
        *scan = NULL;
        scan++;
    };

    delete verboseMode;
    delete shortMessageMode;
    verboseMode = NULL;
    shortMessageMode = NULL;
};

void MyProgram::listItems() {
    double total = 0.00;

    cout << "------------------------------\nItems in Database:\n------------------------------\n";
    auto scan = myMainList.begin();

    while (scan != myMainList.end()) {
        cout << "  @ " << setw(20) << (*scan)->getDescription() << "\n\tUS$ " << fixed << setprecision(2)
             << (*scan)->getCost() << endl;
        total += (*scan)->getCost();
        scan++;
    };
    cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};

void MyProgram::insertItems() {
    cout << "------------------------------\nInset New Items:\n------------------------------\n";

    Menu menu("Insert Items",
              {"Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella", "Milk",
               "Water", "Soda", "Beer"});
    int escolha = -1;

    while (escolha) {
        escolha = menu.getChoice();

        switch (escolha) {
            case 1: {
                insertBread();
            };
                break;
            case 2: {
                insertCheese();
            };
                break;
            case 3: {
                insertCottageCheese();
            };
                break;
            case 4: {
                insertCracker();
            };
                break;
            case 5: {
                insertFilledWafer();
            };
                break;
            case 6: {
                insertHam();
            };
                break;
            case 7: {
                insertMortadella();
            };
                break;
            case 8: {
                insertMilk();
            };
                break;
            case 9: {
                insertWater();
            };
                break;
            case 10: {
                insertSoda();
            };
                break;
            case 11: {
                insertBeer();
            };
                break;
        };
    };
};

void MyProgram::insertBread() {
    Bread *bread;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Bread:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    bread = new Bread(type, weight, cost);
    myMainList.insert(myMainList.end(), bread);

    cout << endl << bread->getDescription() << " - US$ " << fixed << setprecision(2) << bread->getCost() << endl;
};

void MyProgram::insertCheese() {
    Cheese *cheese;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    cheese = new Cheese(type, weight, cost);
    myMainList.insert(myMainList.end(), cheese);

    cout << endl << cheese->getDescription() << " - US$ " << fixed << setprecision(2) << cheese->getCost() << endl;
};

void MyProgram::insertCottageCheese() {
    CottageCheese *cottageCheese;
    string buffer;
    string type;
    string fatContent;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Cottage Cheese:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Fat Content: ";
    getline(cin, buffer);
    fatContent = buffer;

    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    cottageCheese = new CottageCheese(fatContent, type, weight, cost);
    myMainList.insert(myMainList.end(), cottageCheese);

    cout << endl << cottageCheese->getDescription() << " - US$ " << fixed << setprecision(2) << cottageCheese->getCost()
         << endl;
};

void MyProgram::insertCracker() {
    Cracker *cracker;
    string buffer;
    string type;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    cracker = new Cracker(type, amount, cost);
    myMainList.insert(myMainList.end(), cracker);

    cout << endl << cracker->getDescription() << " - US$ " << fixed << setprecision(2) << cracker->getCost() << endl;
};

void MyProgram::insertFilledWafer() {
    FilledWafer *filledWafer;
    string buffer;
    string type;
    string filling;
    int amount;
    double cost;

    cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Filling ...: ";
    getline(cin, buffer);
    filling = buffer;

    cout << "Amount ....: ";
    getline(cin, buffer);
    amount = stoi(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    filledWafer = new FilledWafer(type, filling, amount, cost);
    myMainList.insert(myMainList.end(), filledWafer);

    cout << endl << filledWafer->getDescription() << " - US$ " << fixed << setprecision(2) << filledWafer->getCost()
         << endl;
};

void MyProgram::insertHam() {
    Ham *ham;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Ham:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    ham = new Ham(type, weight, cost);
    myMainList.insert(myMainList.end(), ham);

    cout << endl << ham->getDescription() << " - US$ " << fixed << setprecision(2) << ham->getCost() << endl;
};

void MyProgram::insertMortadella() {
    Mortadella *mortadella;
    string buffer;
    string type;
    float weight;
    double cost;

    cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Weight ....: ";
    getline(cin, buffer);
    weight = stof(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    mortadella = new Mortadella(type, weight, cost);
    myMainList.insert(myMainList.end(), mortadella);

    cout << endl << mortadella->getDescription() << " - US$ " << fixed << setprecision(2) << mortadella->getCost()
         << endl;
};

void MyProgram::insertMilk() {
    Milk *milk;
    string buffer;
    string type;
    string brand;
    double volume;
    double cost;

    cout << "------------------------------\nInsert Milk:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Brand ......: ";
    getline(cin, buffer);
    brand = buffer;

    cout << "Volume ....: ";
    getline(cin, buffer);
    volume = stod(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    milk = new Milk(type, brand, volume, cost);
    myMainList.insert(myMainList.end(), milk);

    cout << endl << milk->getDescription() << " - US$ " << fixed << setprecision(2) << milk->getCost()
         << endl;
}

void MyProgram::insertWater() {
    Water *water;
    string buffer;
    string name;
    string brand;
    double volume;
    double cost;

    cout << "------------------------------\nInsert Water:\n------------------------------\n";
    cout << "Name ......: ";
    getline(cin, buffer);
    name = buffer;

    cout << "Brand ......: ";
    getline(cin, buffer);
    brand = buffer;

    cout << "Volume ....: ";
    getline(cin, buffer);
    volume = stod(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    water = new Water(name, brand, volume, cost);
    myMainList.insert(myMainList.end(), water);

    cout << endl << water->getDescription() << " - US$ " << fixed << setprecision(2) << water->getCost()
         << endl;
}

void MyProgram::insertSoda() {
    Soda *soda;
    string buffer;
    string flavour;
    string brand;
    double volume;
    double cost;

    cout << "------------------------------\nInsert Soda:\n------------------------------\n";
    cout << "Flavour ......: ";
    getline(cin, buffer);
    flavour = buffer;

    cout << "Brand ......: ";
    getline(cin, buffer);
    brand = buffer;

    cout << "Volume ....: ";
    getline(cin, buffer);
    volume = stof(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    soda = new Soda(flavour, brand, volume, cost);
    myMainList.insert(myMainList.end(), soda);

    cout << endl << soda->getDescription() << " - US$ " << fixed << setprecision(2) << soda->getCost()
         << endl;
}

void MyProgram::insertBeer() {
    vector<string> opcoes({"Exit", "Bock Beer", "Lager Beer", "Pale Ale Beer", "Pilsen Beer"});
    Menu menu("Insert Beer", opcoes);
    int escolha = -1;

    while (escolha) {
        escolha = menu.getChoice();

        switch (escolha) {
            case 1: {
                insertBockBeer();
            };
                break;
            case 2: {
                insertLagerBeer();
            };
                break;
            case 3: {
                insertPaleAleBeer();
            };
                break;
            case 4: {
                insertPilsenBeer();
            };
                break;
        };
    };
}

void MyProgram::insertBockBeer() {
    BockBeer *bockBeer;
    string buffer;
    string type;
    string brand;
    double alcoholContent;
    double volume;
    double cost;

    cout << "------------------------------\nInsert Bock Beer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Brand ....: ";
    getline(cin, buffer);
    brand = buffer;

    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    alcoholContent = stod(buffer);

    cout << "Volume ......: ";
    getline(cin, buffer);
    volume = stod(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    bockBeer = new BockBeer(type, alcoholContent, brand, volume, cost);
    myMainList.insert(myMainList.end(), bockBeer);

    cout << endl << bockBeer->getDescription() << " - US$ " << fixed << setprecision(2) << bockBeer->getCost()
         << endl;
};

void MyProgram::insertLagerBeer() {
    LagerBeer *lagerBeer;
    string buffer;
    string style;
    string brand;
    double alcoholContent;
    double volume;
    double cost;

    cout << "------------------------------\nInsert Lager Beer:\n------------------------------\n";
    cout << "Style ......: ";
    getline(cin, buffer);
    style = buffer;

    cout << "Brand ....: ";
    getline(cin, buffer);
    brand = buffer;

    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    alcoholContent = stod(buffer);

    cout << "Volume ......: ";
    getline(cin, buffer);
    volume = stod(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    lagerBeer = new LagerBeer(style, alcoholContent, brand, volume, cost);
    myMainList.insert(myMainList.end(), lagerBeer);

    cout << endl << lagerBeer->getDescription() << " - US$ " << fixed << setprecision(2) << lagerBeer->getCost()
         << endl;
};

void MyProgram::insertPaleAleBeer() {
    PaleAleBeer *paleAleBeer;
    string buffer;
    string packagingType;
    string brand;
    double alcoholContent;
    double volume;
    double cost;

    cout << "------------------------------\nInsert Lager Beer:\n------------------------------\n";
    cout << "Packaging ......: ";
    getline(cin, buffer);
    packagingType = buffer;

    cout << "Brand ....: ";
    getline(cin, buffer);
    brand = buffer;

    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    alcoholContent = stod(buffer);

    cout << "Volume ......: ";
    getline(cin, buffer);
    volume = stod(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    paleAleBeer = new PaleAleBeer(packagingType, alcoholContent, brand, volume, cost);
    myMainList.insert(myMainList.end(), paleAleBeer);

    cout << endl << paleAleBeer->getDescription() << " - US$ " << fixed << setprecision(2) << paleAleBeer->getCost()
         << endl;
};

void MyProgram::insertPilsenBeer() {
    PilsenBeer *pilsenBeer;
    string buffer;
    string type;
    string brand;
    double alcoholContent;
    double volume;
    double cost;

    cout << "------------------------------\nInsert Lager Beer:\n------------------------------\n";
    cout << "Type ......: ";
    getline(cin, buffer);
    type = buffer;

    cout << "Brand ....: ";
    getline(cin, buffer);
    brand = buffer;

    cout << "Alcohol Content ......: ";
    getline(cin, buffer);
    alcoholContent = stod(buffer);

    cout << "Volume ......: ";
    getline(cin, buffer);
    volume = stod(buffer);

    cout << "Cost ......: ";
    getline(cin, buffer);
    cost = stod(buffer);

    cin.clear();

    pilsenBeer = new PilsenBeer(type, alcoholContent, brand, volume, cost);
    myMainList.insert(myMainList.end(), pilsenBeer);

    cout << endl << pilsenBeer->getDescription() << " - US$ " << fixed << setprecision(2) << pilsenBeer->getCost()
         << endl;
};

MyBoolean *MyProgram::getVerboseMode() const {
    return verboseMode;
}

void MyProgram::setVerboseMode(MyBoolean *value) {
    MyProgram::verboseMode = value;
}

MyBoolean *MyProgram::getShortMessageMode() const {
    return shortMessageMode;
}

void MyProgram::setShortMessageMode(MyBoolean *value) {
    MyProgram::shortMessageMode = value;
}

void MyProgram::start(string programName) {
    myMainList.clear();
    Information::wellcome("C++ Program " + string(programName) + " running!", shortMessageMode->getStatus());
    process();
    Information::bye(shortMessageMode->getStatus());
    clearAll();
}
