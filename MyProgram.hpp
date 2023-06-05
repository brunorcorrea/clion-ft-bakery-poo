//
// Created by corre on 6/2/2023.
//

#ifndef MY_PROGRAM_HPP
#define MY_PROGRAM_HPP

#include <vector>

#include "MyBoolean.hpp"
#include "Food.hpp"

using namespace std;

class MyProgram {
private:
    MyBoolean *verboseMode = NULL;
    MyBoolean *shortMessageMode = NULL;

    vector<Food *> myMainList;

    void process();

    void clearAll();

    void listItems();

    void insertItems();

    void insertBread();

    void insertCracker();

    void insertFilledWafer();

    void insertCheese();

    void insertCottageCheese();

    void insertHam();

    void insertMortadella();

    void insertMilk();

    void insertWater();

    void insertSoda();

    void insertBeer();

    void insertBockBeer();

    void insertLagerBeer();

    void insertPaleAleBeer();

    void insertPilsenBeer();

public:
    MyBoolean *getVerboseMode() const;

    void setVerboseMode(MyBoolean *verboseMode);

    MyBoolean *getShortMessageMode() const;

    void setShortMessageMode(MyBoolean *shortMessageMode);

    void start(string programName);
};


#endif //MY_PROGRAM_HPP
