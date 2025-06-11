#ifndef PILE_H
#define PILE_H
#include<iostream>
using namespace std;
struct elemnt
{
    int val;
    elemnt *suiv;
};


 class pile
 {
 private:
    elemnt *tete;
 public:
    pile();
    pile(const pile &);
    void empiler(elemnt );
    void depiler();
    elemnt sommet() const;
    bool estvide() const;
    void afficher();
    void afficher1();
    ~pile();
 };
 
 
 

#endif