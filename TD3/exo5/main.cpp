#include<iostream>
#include"vect.h"

using namespace std;

int main()
{
    vect v(3);
    v[0]=2;
    v[1]=2;
    v[2]=2;
    v.afficher();
    vectb b(10 , 14);
    b[10]=24;
    b[11]=24;
    b[12]=24;
    b[13]=24;
    b[14]=24;
    b.afficher();

}