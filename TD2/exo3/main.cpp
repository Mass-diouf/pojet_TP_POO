#include <iostream>
#include "matrice.h"

using namespace std;

int main() {
    // Création d'une matrice A (2x3)
    matrice A(2, 3);

    // Remplissage manuel de A
    A.setelement(0, 0, 1);
    A.setelement(0, 1, 2);
    A.setelement(0, 2, 3);
    A.setelement(1, 0, 4);
    A.setelement(1, 1, 5);
    A.setelement(1, 2, 6);

    // Affichage de A
    cout << "Matrice A :" << endl;
    A.afficher();

    //  Appel du constructeur de copie
    cout << "\nCréation de la matrice B par copie de A (constructeur de copie)" << endl;
    matrice B = A;

    // Modification de B pour vérifier indépendance
    B.setelement(0, 0, 99);

    cout << "Matrice B (copie de A avec modification) :" << endl;
    B.afficher();

    cout << "Vérification que A est inchangée :" << endl;
    A.afficher();

    //  Appel du constructeur de copie implicite via fonction
    cout << "\nCréation de la matrice C comme produit A * B" << endl;
    matrice C = A.produit(B);

    cout << "Matrice C = A * B :" << endl;
    C.afficher();

    return 0;
}
