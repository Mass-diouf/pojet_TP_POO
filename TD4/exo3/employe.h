#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>
#include<string>

using namespace std;

class employe
{
private:
   string nom;
   string prenom;
   int age ;
public:
    employe(string , string , int );
    virtual void affichage();
    virtual double CalculeSalaire()=0; 
    ~employe();
};




#endif
