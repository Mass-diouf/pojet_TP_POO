#include<iostream>
#include"str.h"
using namespace std;


int main()
{
    str mass("mass");
    str khadija("khadija");
    str amour= mass + khadija;

    mass.affichage();
    khadija.affichage();
    amour.affichage();


    return 0;
}