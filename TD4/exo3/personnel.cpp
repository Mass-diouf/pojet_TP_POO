
#include "personnel.h"

personnel::personnel(int t)
{
   taille=t;
   tab = new employe * [taille];
   for (int  i = 0; i < taille; i++)
   {
    tab[i]=nullptr;
   }
   

}

void personnel :: ajouter(employe * e)
{
    int i = 0;
    while (i < taille && tab[i]!=nullptr)
    {
        i++; 
    }
    if (i < taille)
    {
        tab[i]=e;
    }

 
   
}

void personnel :: affchage()
{
   int i = 0;
    while (i < taille && tab[i]!=nullptr)
    {
        tab[i]->affichage();
         i++;
    } 
}

double personnel::salaire_moyenne()
{
   int i = 0;
   double somme=0;
    while (i < taille && tab[i]!=nullptr)
    {
        somme+=tab[i]->CalculeSalaire();
         i++;
    }
    return somme/i;  
}

personnel::~personnel()
{

    delete [] tab;
}