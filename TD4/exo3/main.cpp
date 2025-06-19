#include <iostream>
#include<string>
#include"personnel.h"
using namespace std;


int main()
{
  commercial c("diouf","massamba ", 24, 90000000) ; 
  commercial c1("diop","moussa", 25, 500000) ;
  manutentionnaire m("ndiaye","khady", 19, 50) ;

  personnel p(5);
  p.ajouter(&c);
  p.ajouter(&c1);
  p.ajouter(&m);
  p.affchage();

  cout<< " le salaire moyen est :"<< p.salaire_moyenne();



  return 0;
}