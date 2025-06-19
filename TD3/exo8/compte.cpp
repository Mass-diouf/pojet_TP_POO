#include "compte.h"


compte :: compte(long & l)
{
    l++;
    numero= l;
    solde = 0;
}

void compte ::affiche_toi()
{
    cout<<numero;
    cout << solde;
}

void compte :: versement(double b)
{
    solde= solde+b;
}

bool compte::retrait(double b)
{
    if (b<solde)
    {
        solde = solde -b ;
        return true;
    }
   return false ;
}
compte ::~compte()
{

}

comptecour :: comptecour(long l) : compte(l)
{
   
}

bool comptecour::retrait(double b)
{
    return compte :: retrait(b);
}

void comptecour ::affiche_toi()
{

     cout<<"COMPTE COURANT"<<endl;
   

     compte::affiche_toi();
   
}

comptecour::~comptecour()
{

}

comptEpargne:: comptEpargne(long l , double t) : compte(l)
{
 taux = t;
}

double comptEpargne::calculInteret()
{

}
void comptecour ::affiche_toi()
{

     cout<<"COMPTE EPARGNE"<<endl;
   

     compte::affiche_toi();
   
}

comptEpargne :: ~comptEpargne()
{

}

