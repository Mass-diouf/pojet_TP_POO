#include <iostream>
#include "pile.h"
using namespace std;



int main() {
    pile p;

    // Empiler des valeurs
    p.empiler(10);
    p.empiler(20);
    p.empiler(30);
    cout << "Pile après empilements : ";
    p.afficher();

    // Voir le sommet
    cout << "Sommet actuel : " << p.sommet() << endl;

    // Dépiler un élément
    p.depiler();
    cout << "Pile après un dépilement : ";
    p.afficher();

    // Empiler deux autres valeurs pour test des opérateurs
    p.empiler(5);
    p.empiler(2);
    cout << "Pile avant opération + : ";
    p.afficher();

    // Utilisation de l’opérateur +
    +p;
    cout << "Pile après somme des deux premiers éléments : ";
    p.afficher();

    // Empiler à nouveau deux valeurs pour tester *
    p.empiler(3);
    p.empiler(4);
    *p;
    cout << "Pile après multiplication des deux premiers éléments : ";
    p.afficher();

    // Empiler encore pour tester -
    p.empiler(15);
    p.empiler(5);
    -p;
    cout << "Pile après soustraction des deux premiers éléments : ";
    p.afficher();

    return 0;
}

