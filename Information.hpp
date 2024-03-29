/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#ifndef INFORMATION_HPP
#define INFORMATION_HPP

using namespace std;

class Information {
private:
    static const string institution;
    static const string dept;
    static const string author;
    static const string date;
    static const string decoration;

public:
    static string getInstitution();

    static string getDept();

    static string getAuthor();

    static string getDate();

    static void welcome();

    static void welcome(string message);

    static void welcome(string message, bool shortMessage);

    static void bye();

    static void bye(bool shortMessage);
};

#endif

/* fim de arquivo */