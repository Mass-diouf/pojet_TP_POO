#include "entreprise.h"
#include <iostream>
using namespace std;

entreprise::entreprise(string nomEntr, individu dir, int nb) 
//la construction de directeur est possible grace a string qui rend la copie champs a champs
    : nom(nomEntr), directeur(dir), nb_salaries(nb) {cout <<"Constructeur entreprise "<<endl;}

void entreprise::afficher() {
    cout << "Entreprise : " << nom << endl;
    cout << "Nombre de salaries : " << nb_salaries << endl;
    cout << "Directeur : ";
    directeur.afficher(); 
}

entreprise::~entreprise() {
    cout <<"Destructeur entreprise "<<endl;
}
