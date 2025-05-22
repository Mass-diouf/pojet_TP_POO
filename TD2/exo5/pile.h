#ifndef PILE_H
#define PILE_H
#include<iostream>
using namespace std;
struct liste
{
    int val;
    liste *suiv;
};


 class pile
 {
 private:
    liste *tete;
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