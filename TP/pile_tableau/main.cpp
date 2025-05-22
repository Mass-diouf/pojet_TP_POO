#include <iostream>
#include "pile.h"
using namespace std;

// Fonction utilitaire pour colorer le texte (Windows uniquement)


void menu() {
    
    cout << "\n====== MENU DE GESTION DE LA PILE ======\n";
    
    cout << "1. Empiler\n";
    cout << "2. Depiler\n";
    cout << "3. Afficher la pile\n";
    cout << "4. Voir le sommet\n";
    cout << "5. Quitter\n";
    
    cout << "========================================\n";
    cout << "Votre choix : ";
}

int main() {
    pile p;
    int choix, valeur;

    do {
        menu();
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "Entrez une valeur à empiler : ";
                cin >> valeur;
                p.empiler(valeur);
                cout << " Valeur empiler avec succès.\n";
                break;

            case 2:
                p.depiler();
                cout << " Élement dépilé .\n";
                break;

            case 3:
                
                cout << " Contenu actuel de la pile :\n";
                p.afficher();
                
                break;

            case 4:
                if (!p.estvide()) {
                
                    cout << " Sommet de la pile : " << p.sommet() << endl;
                } else {
                
                    cout << "La pile est vide.\n";
                }
                
                break;

            case 5:
                
                cout << "Au revoir \n";
                break;

            default:
                
                cout << " Choix invalide. Veuillez réessayer.\n";
                
        }

    } while (choix != 5);

    return 0;
}
