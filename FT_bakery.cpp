//
// Created by corre on 6/2/2023.
//

#include "FT_bakery.hpp"

#include "MyProgram.hpp"

int main(int argc, char *argv[]) {
    MyProgram myProgram;
    FT_bakery ftBakery;
    ftBakery.verifyArguments(argc, argv);
    myProgram.start(argv[0]);
};

void FT_bakery::verifyArguments(int, char **) {
    if (verboseMode) { delete verboseMode; };
    if (shortMessageMode) { delete shortMessageMode; };

    verboseMode = NULL;
    shortMessageMode = NULL;

    for (int count = 1; count < argc; count++) {
        if (string(argv[count]) == "-v") { verboseMode = new MyBooleanClass(true); };
        if (string(argv[count]) == "-s") { shortMessageMode = new MyBooleanClass(true); };
    };

    if (!verboseMode) { verboseMode = new MyBooleanClass(); };  // default is false
    if (!shortMessageMode) { shortMessageMode = new MyBooleanClass(); };  // default is false
}
