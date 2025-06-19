#ifndef PERSONNEL_H
#define PERSONNEL_H

#include"employe.h"
#include"commercial.h"
#include"manutentionnaire.h"



class personnel
{
private:
  int taille ;
  employe ** tab;
public:
    personnel(int );
    void ajouter(employe *);
    void affchage();
    double salaire_moyenne();
    ~personnel();
};










#endif