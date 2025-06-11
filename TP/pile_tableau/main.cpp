#include <iostream>
#include "pile.h"
using namespace std;



int main() {
    pile p;

    
     p.empiler(10);
    p.empiler(20);
     p.empiler(30);
     cout << "Pile apres empilements : ";
     p.afficher();

    
     cout << "Sommet actuel : " << p.sommet() << endl;

   
    p.depiler();
     cout << "Pile apres un depilement : ";
    p.afficher();

    
     p.empiler(5);
     p.empiler(2);
         p.afficher();

    
   

    p.evaluation();
     p.afficher();

    return 0;
}

