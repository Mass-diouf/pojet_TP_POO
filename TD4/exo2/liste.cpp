#include"liste.h"

liste::liste(int t)
{
    taille=t;
    int i;
    l=new base *[taille];
    for ( i = 0; i < taille; i++)
    {
        l[i]=nullptr;
    }
    
}

liste ::~liste()
{
    delete [] l;
}

void liste::affichage()
{  int i =0;
    while (i <taille && l[i]!=nullptr)
    {
        l[i]->afficher();
        i++;
    }
      
}

void liste ::ajouter(base * b)
{
   int i =0;
    while (i <taille && l[i]!=nullptr)
    {
        i++;
    }  
    if (i <taille )
    {
        l[i]=b;
    }
    
}