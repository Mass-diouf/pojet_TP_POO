#include<iostream>
#include<string>
#include"fichier.h"
using namespace std;

int main()
{   
    salaire s("massamba", "Diouf");
    administration a("cheikh","seck", "secretaire" );
     professeur p("talla", "diop", "doctorat");
    salaire * s1=&p;

    s.afficher();
    s1->afficher();
    

    
 return 0;
}