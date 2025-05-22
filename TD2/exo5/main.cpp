#include<iostream>
#include"pile.h"
using namespace std;


int main()
{
     cout<<"----------------------DEBUT DU PROGRAMME----------------------"<<endl;

       pile A;
        A.empiler(1);
        A.empiler(2);
        A.empiler(3);
        A.empiler(4);
        A.empiler(5);
        A.empiler(6);
        A.depiler();
        A.afficher();
        cout<< A.sommet();

     cout<<"----------------------FIN DU PROGRAMME----------------------"<<endl;

        

}