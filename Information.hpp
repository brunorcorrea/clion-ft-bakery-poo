/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#ifndef INFORMATION_HPP
   #define INFORMATION_HPP

using namespace std;
   
class Information
   {
   private: 
      static const string institution;
      static const string dept;
      static const string author;
      static const string date;
      static const string decoration;
            
   public:
      static const string getInstitution();
      static const string getDept();
      static const string getAuthor();
      static const string getDate();
      
      static const void welcome();
      static const void welcome(string message);
      static const void welcome(string message, bool shortMessage);
      static const void bye();
      static const void bye(bool shortMessage);
   };

#endif
   
/* fim de arquivo */