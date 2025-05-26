#include "file.h"
#include <iostream>
using namespace std;

file::file() {
    tet = queue = nullptr;
}

file::file(const file &f) {
    tet = queue = nullptr;
    int i=0;
    liste *parcour = f.tet;
    while (parcour != nullptr) {
        enfiler(parcour->val,&i);
        parcour = parcour->suiv;
    }
}

void file::enfiler(int val, int *indice) {
    liste *courant = new liste;
    courant->val = val;
    courant->suiv = nullptr;
    courant->indice=(*indice)++;
     cout <<"client "<< courant->indice<<"  arrive"<<endl ;

    if (tet == nullptr) {
        tet = queue = courant;
    } else {
        queue->suiv = courant;
        queue = courant;
    }
}

void file::defiler() {
    if (tet != nullptr) {
        liste *courant = tet;
        tet = tet->suiv;
     cout <<"client "<< courant->indice <<" est servie"<<endl ;

        delete courant;
        if (tet == nullptr) {
            queue = nullptr;
        }

    }
}

int file::tete() const {
    if (tet != nullptr) {
        return tet->val;
    } else {
        cerr << "Erreur : file vide.\n";
        return -1;
    }
}

bool file::estvide() const {
    return tet == nullptr;
}

void file::afficher() {
    cout << "-------------------------------------------------\n"; 
    liste *courant = tet;
    while (courant) {
        cout <<"client  "<< courant->indice<<" valeur : " <<courant->indice <<endl ;
        courant = courant->suiv;
    }
    cout << "\n-------------------------------------------------\n";
}


file & file::operator=(const file &f)
{
    if (this != &f)
    {
        // 1. Libération de l'ancienne file
        liste *courant = tet;
        while (courant != nullptr)
        {
            liste *temp = courant;
            courant = courant->suiv;
            delete temp;
        }

        tet = queue = nullptr;
      int i=0;
        // 2. Copie des éléments de f
        liste *parcour = f.tet;
        while (parcour != nullptr)
        {
            enfiler(parcour->val , &i);
            parcour = parcour->suiv;
        }
    }

    return *this;
}
file:: ~file()
{
   liste *courant = tet;
        while (courant != nullptr)
        {
            liste *temp = courant;
            courant = courant->suiv;
            delete temp;
        }  
}



    