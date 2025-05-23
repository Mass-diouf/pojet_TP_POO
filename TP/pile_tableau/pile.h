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
    pile (const pile &);
    void empiler(int );
    void depiler();
    int sommet() const;
    bool estvide() const;
    void afficher();
    pile & operator=(const pile&);
    pile & operator+();
    pile & operator*( );
    pile & operator-( );



    ~pile();
 };
 
 
 

#endif