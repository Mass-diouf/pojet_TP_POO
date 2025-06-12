#ifndef MATRICECREUSE_H
#define MATRICECREUSE_H

#include<iostream>


using namespace std;

struct matrice 
{
    int ligne ;
    int colone;
    int ** mat;
};

 // =============== PARTIE I ===============
// class matricecreuse
// {
// private:
//       int nb_elemnt;
//       int *tab[3];
// public:
//     matricecreuse(matrice);
//     void affichaege();
//     ~matricecreuse();
// };
 // =============== PARTIE II ===============
 struct liste
 {
    int row;
    int col;
    int val;
    liste * suiv;

 };
 typedef liste * l;
 class matricecreuse
 {
 private:
    l  start;
 public:
    matricecreuse();
    void ajouter (l);
    l tete();
    void affichage();
    matricecreuse(const matricecreuse&);
    matricecreuse& operator=( const matricecreuse&);
    
    ~matricecreuse();
 };
 
 
 





#endif