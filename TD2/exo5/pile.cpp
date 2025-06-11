#include"pile.h"


pile :: pile()
{  
     cout<<"-------------------APL DU CONSTRUCTEUR-------------------------"<<endl;
    tete=nullptr;
}


pile::pile(const pile &p) 
{
   cout<<"-------------------APL DU CONSTRUCTEUR DE COPIE-------------------------"<<endl;
    tete = nullptr;
    pile temp;
    liste *courant = p.tete;

    // Étape 1 : empiler les éléments dans une pile temporaire (inversion)
    while (courant) {
        temp.empiler(courant->val);
        courant = courant->suiv;
    }

    // Étape 2 : réempiler dans l'ordre original dans this
    while (!temp.estvide()) {
        empiler(temp.sommet());
        temp.depiler();
    }
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
{   if (!estvide())
    {
        return tete->val;
    }

}

bool pile :: estvide() const
{  
        return ((tete==nullptr) ? true : false);
        
   

}
void pile :: afficher1()
{
   cout<<"--------------------------------------------"<<endl;
   pile courant(*this);
   while(!courant.estvide())
   {
     cout<< courant.sommet();
     cout<<" ";
     courant.depiler();
   }
    cout<<endl;
   cout<<"--------------------------------------------"<<endl;
  
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