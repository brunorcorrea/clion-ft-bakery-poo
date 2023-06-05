/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include "MyBoolean.hpp"

   MyBoolean::MyBoolean()            { booleanValue = false;  };
   MyBoolean::MyBoolean(bool value ) { booleanValue = value;  };
   MyBoolean::~MyBoolean()           { booleanValue = false;  };
   
   const bool MyBoolean::getStatus()  { return(booleanValue);  };

/* fim de arquivo */