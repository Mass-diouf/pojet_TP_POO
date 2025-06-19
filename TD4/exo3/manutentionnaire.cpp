

#include"manutentionnaire.h"

manutentionnaire::manutentionnaire(string n, string p, int a , int nh ): employe(n,p,a)
{
    nb_heure=nh;
}

double manutentionnaire:: CalculeSalaire()
{
  return 65 * nb_heure;
}
void manutentionnaire::affichage()
{
  employe :: affichage();
  cout<<"Nombre d heure   : "<<nb_heure<<endl;
}

manutentionnaire::~manutentionnaire()
{
}