#ifndef VECT_H
#define VECT_H

#include<iostream>
using namespace std;

template <class v>
class vect
{
private:
    int n;
    v *tab;
public:
    vect(int);
    v& operator[](int);
    ~vect();
};

// ================== IMPLEMENTATIONS ==================

template <class v>
vect<v>::vect(int taille) {
    n = taille;
    tab = new v[n];
}

template <class v>
v& vect<v>::operator[](int i) {
    if (i >= 0 && i < n)
        return tab[i];
    else {
        cout << "Erreur : index " << i << " hors limites !" << endl;
        exit(EXIT_FAILURE); 
    }
}

template <class v>
vect<v>::~vect() {
    delete[] tab;
}

#endif
