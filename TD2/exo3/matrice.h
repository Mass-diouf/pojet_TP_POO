#ifndef MATRICE_H
#define MATRICE_H
#include<iostream>
using namespace std;

class matrice
{
private:
    int ligne ;
    int colone;
    int **tab;
public:
    matrice(int , int );
    matrice(const matrice &);
    int getelment(int , int ) const ;
    void setelement(int, int, int   );
    matrice produit(const matrice &);
    void afficher();
    matrice & operator=(const matrice &);

    ~matrice();
};




#endif