/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#ifndef MY_BOOLEAN_HPP
#define MY_BOOLEAN_HPP

class MyBooleanClass {
private:
    bool booleanValue;

public:
    MyBooleanClass();

    MyBooleanClass(bool);

    ~MyBooleanClass();

    const bool getStatus(void);
};

#endif

/* fim de arquivo */