#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include<iostream>
using namespace std;


class enseignant
{
private:
    char nom[30];
    char prenom[30];
    char diplome[30];
    char matiere[5][30];

public:
    enseignant(char * , char *, char *);
    enseignant (const enseignant &);
    char * getnom();
    char * getprenom();
    char * getdiplome();
    void setmatiere(char *);
    void afficher();
    enseignant & operator=(const enseignant &);
    
    ~enseignant();
};





#endif