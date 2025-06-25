#include<iostream>
#include"formatage.h"

using namespace std;
int main ()
{
    formatage f("j suis un etudiant ",'n',"black");
    formatage f1("j suis un prof ",'i',"black");
    formatage f2("j suis un personel ",'b',"rouge");
    str m("j suis un prof de tp");
    formatage f3(m,'i',"rouge");


  f.affichage();
  cout<<endl ;
   f1.affichage();
  cout<<endl ;
   f2.affichage();
    cout<<endl ;
   f3.affichage();

cout<<endl ;
   f1.bold();
   f1.affichage();
 f3.colorer("blue");
   cout<<endl ;
   f3.affichage();
  

    
return 0;

}
