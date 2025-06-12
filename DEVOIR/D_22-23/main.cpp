#include<iostream>
#include"matricecreuse.h"

using namespace std;


    int main() {
    matricecreuse m;
    l n1 = new liste{0, 1, 5, nullptr};
    l n2 = new liste{1, 0, 8, nullptr};

    m.ajouter(n1);
    m.ajouter(n2);

    m.affichage();

    return 0;
}

    
