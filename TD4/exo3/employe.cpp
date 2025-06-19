#include "employe.h"


employe::employe(string n, string p, int a)
{
    nom=n;
    prenom=p;
    age = a;
}

void employe::affichage()
{
    cout<<"nom : "<<nom<<endl;
    cout<<"prenom : "<<prenom<<endl;
    cout<<"Age  : "<<age<<endl;

}

employe::~employe()
{

}