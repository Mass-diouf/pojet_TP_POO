#include <iostream>
#include "ensemble.h"

using namespace std;

int main() {
    cout << "===== Test de la classe Ensemble =====\n" << endl;

    // Création d'un ensemble de taille 10
    ensemble e1(10);
    e1.ajouter(3);
    e1.ajouter(5);
    e1.ajouter(7);

    cout << "e1 apres ajout de 3, 5, 7 : ";
    e1.afficher();

    // Test de l'opérateur <<
    e1 << 9 << 11;
    cout << "e1 apres ajout avec << de 9 et 11 : ";
    e1.afficher();

    // Test de l'opérateur >>
    e1 >> 5;
    cout << "e1 apres suppression avec >> de 5 : ";
    e1.afficher();

    // Test de l'opérateur %
    cout << "e1 contient 7 ? " << (e1 % 7 ? "Oui" : "Non") << endl;
    cout << "e1 contient 5 ? " << (e1 % 5 ? "Oui" : "Non") << endl;

    // Création d'un deuxième ensemble
    ensemble e2(10);
    e2 << 3 << 4 << 9;

    cout << "\ne2 : ";
    e2.afficher();

    // Union de e1 et e2
    ensemble eUnion = e1 + e2;
    cout << "Union de e1 et e2 : ";
    eUnion.afficher();

    // Intersection de e1 et e2
    ensemble eInter = e1 * e2;
    cout << "Intersection de e1 et e2 : ";
    eInter.afficher();

    // Test du parcours avec init(), existe(), prochain()
    cout << "\nParcours de e1 : ";
    e1.init();
    while (e1.existe()) {
        cout << *e1.prochain() << " ";
    }
    cout << endl;

    // Test de l'affectation
    ensemble e3(5);
    e3 = e1;
    cout << "\ne3 après affectation de e1 : ";
    e3.afficher();

    // Test du cardinal
    cout << "Cardinal de e1 : " << e1.cardinal() << endl;

    cout << "\n===== Fin des tests =====" << endl;

    return 0;
}
