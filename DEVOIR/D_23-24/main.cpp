#include "societe.h"
#include <iostream>
#include <cstring>

int main() {
    
    societe s(20, 12);

   
    voiture *v1 = new voiture;
    v1->cle = new char[10];
    strcpy(v1->cle, "V001");
    strcpy(v1->val.marque, "Toyota");
    strcpy(v1->val.gamme, "Standard");
    v1->val.annee = 2020;
    strcpy(v1->val.model, "Corolla");
    strcpy(v1->val.presentation, "Voiture fiable et economique");

    voiture *v2 = new voiture;
    v2->cle = new char[10];
    strcpy(v2->cle, "V002");
    strcpy(v2->val.marque, "BMW");
    strcpy(v2->val.gamme, "Luxe");
    v2->val.annee = 2022;
    strcpy(v2->val.model, "X5");
    strcpy(v2->val.presentation, "SUV haut de gamme");

    
    s.insertion(v1);
    s.insertion(v2);

    // Recherche
    if (s.rechercher("V001")) {
        cout << "Voiture V001 trouvee dans la societe." << endl;
    } else {
        cout << "Voiture V001 non trouveee." << endl;
    }

    
  
    s.affichage();

    
    

    return 0;
}
