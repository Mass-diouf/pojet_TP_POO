#include "employe.h"
#include "entreprise.h"
#include"liste.h"
#include <iostream>
using namespace std;

int main() {
    cout << "== Debut du programme ==" << endl;

     individu b(1, "Diouf", "Massamba");
     individu i=employe(1, "diouf", "moussa","c++");
   employe e(2, "diop", "mseck", "POO");

   
    b.afficher();
    i.afficher();

   
    cout << "== Fin du programme ==" << endl;

    liste l(4);
     l.ajouter(&i);
     l.ajouter(&b);
     l.ajouter(&e);
     l.affichage();

    return 0;

}
