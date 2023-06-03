/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include "MyProgram.hpp"

int main(int argc, char *argv[]) {
    MyProgram myProgram;
    myProgram.verifyArguments(argc, argv);
    myProgram.start(argv[0]);
};

/* fim de arquivo */
