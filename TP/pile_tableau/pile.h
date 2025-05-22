#ifndef PILE_H
#define PILE_H
#include<iostream>
using namespace std;


 class pile
 {
 private:
    int taille;
    int *tab;
 public:
    pile();
    void empiler(int );
    void depiler();
    int sommet() const;
    bool estvide() const;
    void afficher();
    ~pile();
 };
 
 
 

#endif