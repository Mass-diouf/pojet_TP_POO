#include "individu.h"
#include <iostream>
using namespace std;



individu::individu(int c, string n, string p) : cle(c), nom(n), prnom(p) {
    cout << "Constructeur individu" << endl;
}

int individu::clef() {
    return cle;
}

void individu::afficher() {
    cout << "Nom : " << nom << ", Prenom : " << prnom << ", Cle : " << cle << endl;
}

individu::~individu() {
    // Rien à faire ici car pas d'allocation dynamique
    cout << "Destructeur individu" << endl;
}
