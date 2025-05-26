#include <iostream>
#include "file.h"
using namespace std;

int main ()
{
    int indice=0;
   file f;
    f.enfiler(1,&indice);
    f.enfiler(2,&indice);
    f.enfiler(3,&indice);
    f.defiler();
    f.enfiler(1,&indice);
    f.defiler();
    f.enfiler(4,&indice);
    f.defiler();
    f.enfiler(5,&indice);
    f.enfiler(6,&indice);
    f.defiler();
    f.defiler();
f.afficher();
}



