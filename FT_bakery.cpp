//
// Created by corre on 6/2/2023.
//

#include "FT_bakery.hpp"

#include "MyProgram.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    MyProgram *myProgram = new MyProgram();

    FT_bakery::verifyArguments(argc, argv, myProgram);

    myProgram->start(argv[0]);
};

void FT_bakery::verifyArguments(int argc, char *argv[], MyProgram *myProgram) {
    bool verboseMode = false;
    bool shortMessageMode = false;

    for (int count = 1; count < argc; count++) {
        if (string(argv[count]) == "-v") { verboseMode = true; };
        if (string(argv[count]) == "-s") { shortMessageMode = true; };
    };

    myProgram->setVerboseMode(new MyBoolean(verboseMode));
    myProgram->setShortMessageMode(new MyBoolean(shortMessageMode));
}
