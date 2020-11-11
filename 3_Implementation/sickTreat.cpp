

#include <string>
#include "medical.h"
#include "sickTreat.h"


SickTreat::SickTreat():Medical(),type(""),                                //default constructor
    variants(""){}


SickTreat::SickTreat(int ID, std::string name,int concentration,std::string section,std::string mfgDate,std::string expDate,double price,std::string type,std::string variants):
    Medical(ID,name,concentration,section,mfgDate,expDate,price),type(type),variants(variants){

    }                                                                     //parameterized constructor



    int SickTreat::getID(){                                               //function which returns ID 

    return ID;

    }
    std::string SickTreat::getType(){                                     //function which returns type of the medicine

    return type;

    }
    std::string SickTreat::getName(){                                     //function which returns name of the medicine

    return name;

    }

    double SickTreat::getPrice(){                                         //function which returns price of the medicine

    return price;

    }


