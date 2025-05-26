#ifndef FILE_H
#define FILE_H
#include<iostream>
using namespace std;

struct liste
{
 int val;
 int indice=0;
 liste * suiv;
};

 class file
 {
 private:
   liste * tet;
   liste * queue;
 public:
    file();
    file(const file &);
    void enfiler(int, int *);
    void defiler();
    int tete() const;
    bool estvide() const;
    void afficher();
    file & operator=(const file&);
   
    ~file();
 };
 
 
 

#endif