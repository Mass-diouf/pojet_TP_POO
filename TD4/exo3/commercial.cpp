#include "commercial.h"

commercial :: commercial(string n, string p , int a , double i) : employe(n, p, a)
{
    chifre_d_affaire=i;
}

double  commercial:: CalculeSalaire()
{
    return (0.2 * chifre_d_affaire + 400);
}
void commercial ::affichage()
  {
      employe ::affichage();
      cout<<"chiffre d affaire   : "<<chifre_d_affaire<<endl;
  }

  commercial ::~commercial()
  {
      
  }