#include <iostream>
#include "enseignant.h"

using namespace std;

// Fonction qui prend un enseignant par valeur (déclenche le constructeur de copie)
void afficherEnseignantParValeur(enseignant e) {
    cout << "\n[Copie dans une fonction par valeur]" << endl;
    e.afficher();
}

// Fonction qui retourne une copie (déclenche aussi un constructeur de copie)
enseignant retournerCopie(enseignant e) {
    cout << "\n[Retour d'une copie depuis une fonction]" << endl;
    return e;
}

int main() {
    // Création d’un enseignant avec des données
    char nom[] = "Fall";
    char prenom[] = "Khadija";
    char diplome[] = "Master";

    enseignant e1(nom, prenom, diplome);
    e1.setmatiere((char*)"Mathematiques");
    e1.setmatiere((char*)"Physique");

    cout << "\n[Affichage de e1]" << endl;
    e1.afficher();

    // 1. Constructeur de copie
    cout << "\n[Constructeur de copie : e2 = e1]" << endl;
    enseignant e2 = e1;
    e2.afficher();

    // 2. Passage par valeur à une fonction
    afficherEnseignantParValeur(e1);

    // 3. Retour par valeur depuis une fonction
    enseignant e3 = retournerCopie(e1);
    e3.afficher();

    // 4. Test de l’opérateur d’affectation
    enseignant e4temp((char*)"Sow", (char*)"Aissatou", (char*)"Doctorat");
    e4temp.setmatiere((char*)"Informatique");

    enseignant e4=e1;
    e4 = e4temp;

    cout << "\n[Affichage de e4 (copie par opérateur =)]" << endl;
    e4.afficher();

    return 0;
}
