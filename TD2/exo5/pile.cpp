#include"pile.h"


pile :: pile()
{  
     cout<<"-------------------APL DU CONSTRUCTEUR-------------------------"<<endl;
    tete=nullptr;
}

void pile::empiler(int val)
{
    liste *l = new liste;
    l->val = val;
    l->suiv = tete;
    tete = l;
}


void pile :: depiler()
{
   
   if (!estvide())
   {
     liste *courant ;
    courant=tete;
    tete=courant->suiv;
    delete courant;
   }
   
}

int pile :: sommet() const
{
    return tete->val;
}

bool pile :: estvide() const
{
    return ((tete==nullptr) ? true : false);
}

void pile :: afficher()
{
   cout<<"--------------------------------------------"<<endl;
   liste *courant;
   courant=tete;
   while(courant)
   {
      cout<< courant->val<<"/"; 
     courant=courant->suiv;
   }
    cout<<endl;
   cout<<"--------------------------------------------"<<endl;
  
}

pile ::~pile()
{  
     cout<<"-------------------APL DU DESTRUCTEUR-------------------------"<<endl;
    liste *courant=tete;
    while (courant)
    {
         tete=courant->suiv;
         delete courant;
         courant=tete;
    }
    
}