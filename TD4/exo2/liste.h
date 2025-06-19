#ifndef LISTE_H
#define LISTE_H


#include "individu.h"
#include"employe.h"
#include"entreprise.h"

class liste
{
private:
   int taille;
   base ** l ;
public:
    liste(int);
    void affichage();
    void ajouter(base *);
    ~liste();
};





#endif