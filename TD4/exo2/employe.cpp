#include "employe.h"
#include <iostream>
using namespace std;

employe::employe(int c, string n, string p, string comp)
    : individu(c, n, p), competence(comp) {cout << "Constructeur employe" << endl;}

void employe::afficher() {
    individu::afficher();
    cout << "Compétence : " << competence << endl;
}

int employe::clef() {
    return individu::clef(); // ou return cle; si accessible
}

employe::~employe() {
    // Rien de spécial ici non plus
    cout << "Destructeur employe" << endl;
}
