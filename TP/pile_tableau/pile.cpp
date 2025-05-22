#include"pile.h"


pile ::pile()
{
     cout<<"-------------------APL DU CONSTRUCTEUR-------------------------"<<endl;

    taille =0;
   tab = new int[5]; 
}

pile ::~pile()
{
     cout<<"-------------------APL DU DESTRUCTEUR-------------------------"<<endl;

    delete [] tab;
}

void pile ::empiler(int val)
{
   

      int i;
      if (taille < 5) 
      {
        taille++;
        i = taille;
      } else 
      {
        i = taille - 1;  // on ne dépasse pas la taille max
      }

      while (i > 0) 
      {
        tab[i] = tab[i - 1];
        i--;
      }

      tab[0] = val;

    
}

void pile:: depiler()
{
  if (!estvide())
  {
    int i=0;
    while (i<taille)
    {
     tab[i]=tab[i++];
    }
    taille--;
    
  }
  else
  {
        cout << "Pile vide ! Impossible de dépiler." << endl;
  }
  
}

int pile :: sommet() const
{
  if (!estvide())
   {
        return tab[0];
    } 
    else
    {
        cout << "Pile vide ! Aucun sommet." << endl;
        // ou lever une exception
    }
}
bool pile :: estvide() const
{
    return (taille==0);
}

void pile :: afficher()
{
   cout<<"--------------------------------------------"<<endl;
   int i=0;
     while (i<taille)
     {
        cout<< tab[i]<<"/"; 
        i++;
     }
     
    cout<<endl;
   cout<<"--------------------------------------------"<<endl;
  
}