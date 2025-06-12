#include "societe.h"


societe::societe(int l , int c)
 {
    ligne = l;
    colone = c;

    tab = new voiture**[ligne];
    for (int i = 0; i < ligne; i++) {
        tab[i] = new voiture*[colone];
        for (int j = 0; j < colone; j++) {
            tab[i][j] = nullptr;
        }
    }
}

    
    


societe :: societe(const societe & s)
{
    ligne = s.ligne;
    colone = s.colone;

    tab = new voiture**[ligne];
   for (int i = 0; i < ligne; i++)
  {
        tab[i] = new voiture*[colone];
        for (int j = 0; j < colone; j++) 
        {
            tab[i][j] = nullptr;
        }
  }

    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colone; j++)
        {   if (s.tab[i][j] != nullptr)
            {
                voiture * v= new voiture;
                strcpy(v->val.model ,s.tab[i][j]->val.model);
                strcpy(v->val.marque ,s.tab[i][j]->val.marque);
                strcpy(v->val.presentation ,s.tab[i][j]->val.presentation);
                strcpy(v->val.gamme ,s.tab[i][j]->val.gamme);
                v->val.annee =s.tab[i][j]->val.annee;
                tab[i][j]=v;
            }
        }
        
    }

}
    
    



void societe::insertion(voiture* v) {
    int i = hachage(v->cle);
    for (int j = 0; j < colone; j++) {
        if (tab[i][j] == nullptr) {
            tab[i][j] = v;
            break;
        }
    }
    std::cout << "Insertion impossible : la ligne " << i << " est pleine." << std::endl;
}


void societe::supprimer(char* c)
{
    int i = hachage(c);

    for (int j = 0; j < colone; j++)
    {
        if (tab[i][j] != nullptr && strcmp(c, tab[i][j]->cle) == 0)
        {
            delete tab[i][j];  
            tab[i][j] = nullptr;
            break;
        }
    }
}


bool societe :: rechercher( char * c)
{
    int i = hachage(c);

    for (int  j = 0; j < colone; j++)
    {
      if (tab[i][j] != nullptr && strcmp(c, tab[i][j]->cle) == 0)
        {
           return true;
        }
        
    } 
    return false;
}

int societe :: hachage(char * c)
{
    int somme =0, i=0;
    while (c[i])
    {
        somme+=c[i];
        i++;
    }
    return somme%ligne;
}


void societe::affichage() {
    for (int i = 0; i < ligne; i++) {
        cout << "Ligne " << i + 1 << " : ";
        for (int j = 0; j < colone; j++) {
            if (tab[i][j] != nullptr) {
                cout << "[";
                cout << "Cle: " << tab[i][j]->cle << ", ";
                cout << "Marque: " << tab[i][j]->val.marque << ", ";
                cout << "Gamme: " << tab[i][j]->val.gamme << ", ";
                cout << "Modele: " << tab[i][j]->val.model << ", ";
                cout << "Annee: " << tab[i][j]->val.annee << ", ";
                cout << "Presentation: " << tab[i][j]->val.presentation;
                cout << "] - ";
            } else {
                cout << "[Vide] - ";
            }
        }
        cout << endl;
    }
}

societe::~societe() {
    for (int i = 0; i < ligne; i++) {
        for (int j = 0; j < colone; j++) {
            if (tab[i][j] != nullptr) {
                delete tab[i][j];
            }
        }
        delete[] tab[i];
    }
    delete[] tab;
}





