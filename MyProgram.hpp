//
// Created by corre on 6/2/2023.
//

#ifndef MYPROGRAM_H
#define MYPROGRAM_H

#include <vector>

#include "a02ex01_a.hpp"
#include "a02ex03_b.hpp"

using namespace std;

class MyProgram {
    private:
        MyBooleanClass *verboseMode = NULL;
        MyBooleanClass *shortMessageMode = NULL;

        vector<Food *> myMainList;

        void process(void);

        void clearAll(void);

        void listItems(void);

        void insertItems(void);

        void insertBread(void);

        void insertCracker(void);

        void insertFilledWafer(void);

        void insertCheese(void);

        void insertCottageCheese(void);

        void insertHam(void);

        void insertMortadella(void);

public:
    MyBooleanClass *getVerboseMode() const;

    void setVerboseMode(MyBooleanClass *verboseMode);

    MyBooleanClass *getShortMessageMode() const;

    void setShortMessageMode(MyBooleanClass *shortMessageMode);

    void start(string programName);
};


#endif //MYPROGRAM_H
