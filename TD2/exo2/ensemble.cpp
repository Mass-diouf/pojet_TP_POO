#include "ensemble.h"

// Constructeur
ensemble::ensemble(int t) {
    taille = t;
    position = 0;
    courant = 0;
    tab = new int[taille];
}
//constructeur de copie 

ensemble :: ensemble(const ensemble & e)
{
    taille= e.taille;
    courant=e.courant;
    position=e.position;
    tab= new int [taille];
    for (int i = 0; i < courant; i++)
    {
       tab[i]=e.tab[i];
    }
    
    
}

// Retourne le nombre d'éléments dans l'ensemble
int ensemble::cardinal() {
    return courant;
}

// Vérifie si un élément est présent
bool ensemble::contient(int val) {
    for (int i = 0; i < courant; ++i) {
        if (tab[i] == val)
            return true;
    }
    return false;
}

// Ajoute un élément à l'ensemble
void ensemble::ajouter(int val) {
    if (!contient(val) && courant < taille) {
        tab[courant++] = val;
    }
}

// Supprime un élément de l'ensemble
void ensemble::supprimer(int val) {
    for (int i = 0; i < courant; ++i) {
        if (tab[i] == val) {
            for (int j = i; j < courant - 1; ++j) {
                tab[j] = tab[j + 1];
            }
            courant--;
            break;
        }
    }
}

// Affiche les éléments
void ensemble::afficher() {
    cout << "{ ";
    for (int i = 0; i < courant; ++i) {
        cout << tab[i] << " ";
    }
    cout << "}" << endl;
}

// Opérateur <<
ensemble& ensemble::operator<<(int val) {
   if (!contient(val) && courant < taille) {
        tab[courant++] = val;
    }
    return *this;
}

// Opérateur >>
ensemble& ensemble::operator>>(int val) {
    for (int i = 0; i < courant; ++i) {
        if (tab[i] == val) {
            for (int j = i; j < courant - 1; ++j) {
                tab[j] = tab[j + 1];
            }
            courant--;
            break;
        }
    }
    return *this;
}

// Opérateur %
bool ensemble::operator%(int val) const  {
    for (int i = 0; i < courant; ++i) {
        if (tab[i] == val)
            return true;
    }
    return false;
}

// Opérateur =
ensemble& ensemble::operator=(const ensemble& e) {
    if (this != &e) {
        delete[] tab;
        taille = e.taille;
        courant = e.courant;
        tab = new int[taille];
        for (int i = 0; i < courant; ++i) {
            tab[i] = e.tab[i];
        }
    }
    return *this;
}

// Union de deux ensembles
ensemble ensemble::operator+(const ensemble& e) {
    ensemble res(taille + e.taille);
    for (int i = 0; i < courant; ++i)
        res<<tab[i];
    for (int i = 0; i < e.courant; ++i)
        res<<e.tab[i];
    return res;
}

// Intersection de deux ensembles
ensemble ensemble::operator*(const ensemble& e) {
    ensemble res(taille < e.taille ? taille : e.taille);
    for (int i = 0; i < courant; ++i) {
        if (e%tab[i])
            res<<tab[i];
    }
    return res;
}

// Initialise le parcours
void ensemble::init() {
    position = 0;
}

// Vérifie s'il reste des éléments à parcourir
bool ensemble::existe() {
    return position < courant;
}

// Retourne le prochain élément
int* ensemble::prochain() {
    if (existe())
        return &tab[position++];
    else
        return nullptr;
}

// Destructeur
ensemble::~ensemble() {
    delete[] tab;
}
