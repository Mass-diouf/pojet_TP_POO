#ifndef COMMERCIAL_H
#define COMMERCIAL_H


#include "employe.h"


class commercial : public employe
{
private:
   double chifre_d_affaire;   
public:
    commercial (string, string , int , double);
    double CalculeSalaire();
    void affichage();
    ~commercial ();
};







#endif