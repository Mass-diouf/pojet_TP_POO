#ifndef TABLEAU_H
#define TABLEAU_H

#include<iostream>

using namespace std;


class tableau
{
private:
    int *tab;
    int max;
public:
    tableau(int l)
    {
      max= l ;
      tab=new int [max];
    }
    int & operator[](int i)
    {
        //controler la valeur i
        return tab[i];
    }
    ~tableau();
};

class pile : private tableau  // on doit mas mettre public parceque ici on doit cacher l interface de la classe de base
{                             // pour eviter les affection de type p[i]= val
private:
    int niveau;// nivau de remplicage
public:
    pile(int taille);
    bool est_vide();
    void empiler(int );
    void depiler();
    ~pile();
};







#endif