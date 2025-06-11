#ifndef VECT_H
#define VECT_H

#include<iostream>

using namespace std;

class vect
{
private:
   int n ; 
   int *adr;
public:
    vect(int );
    ~vect();
    int & operator[](int);
    void afficher();

};

class vectb : public vect
{
private:
   int borne_inf;
   int borne_sup; 
public:
    vectb(int , int );
    ~vectb();
    // on doit surdefinir l operateur [] parsceque on na pas exectement la meme chose il il y a un legere diff
    int & operator[](int );
      void afficher();
};

#endif
