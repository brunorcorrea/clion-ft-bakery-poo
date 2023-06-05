/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#ifndef MY_BOOLEAN_HPP
#define MY_BOOLEAN_HPP

class MyBoolean {
private:
    bool booleanValue;

public:
    MyBoolean();

    MyBoolean(bool);

    ~MyBoolean();

    const bool getStatus(void);
};

#endif

/* fim de arquivo */