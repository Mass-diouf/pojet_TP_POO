#include<iostream>
#include"formatage.h"

using namespace std;
int main ()
{
    formatage f("j suis un etudiant ",'n',"black");
    formatage f1("j suis un prof ",'i',"black");
    formatage f2("j suis un personel ",'b',"rouge");


  f.affichage();
  cout<<endl ;
   f1.affichage();
  cout<<endl ;
   f2.affichage();
  

    
return 0;

}
