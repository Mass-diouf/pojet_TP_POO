#include"fichier.h"


salaire ::salaire(string Nom , string Prenom)
{
   nom= Nom;
   prenom=Prenom;
   

}
salaire:: salaire(const salaire& s)
{
   nom= s.nom;
   prenom=s.prenom;
}

salaire& salaire :: operator=(const salaire & s)
{
   if (this==&s)
   {
      return(*this);
   }
    nom= s.nom;
   prenom=s.prenom;

    return(*this);
   
}

string salaire ::get_nom() const
{
   return nom;
}
string salaire ::get_prenom() const
{
   return prenom;
}
void salaire::afficher()
{  
    cout<<" prenom :"<<prenom<<" nom : "<<nom<<endl;
}
salaire::~salaire()
{
    
}

administration ::administration(string prenom , string nom , string f) :salaire(nom,prenom)
{
   fonction=f;
}

administration ::administration(const administration& a) : salaire(a)
{
  fonction=a.fonction;
}

administration& administration::operator=(const administration & a) 
{
   if (this==&a)
   {
     return (*this);
   }
    salaire:: operator=(a);
 fonction=a.fonction;

   return (*this);
   
}
 string administration:: get_fonction() const
 {
    return fonction;
 }

 void administration::afficher()
 {
    salaire::afficher();
     cout<<" fonction :"<<fonction<<endl;

 }


administration::~administration()
{
   
}
professeur :: professeur(string prenom , string nom , string d) : salaire(nom, prenom)
{
   diplome=d;
    
    
}

string professeur:: get_diplome()
{
   return diplome ;
}

professeur:: professeur(const professeur & p) : salaire(p)
{
   diplome=p.diplome;
}

professeur & professeur:: operator=(const professeur & p)
{
   if (this ==&p)
   {
     return (*this);
   }
   salaire :: operator=(p);
  diplome=p.diplome;


   return (*this);
   
}
string & professeur::operator[](int i)
{
   if (i>=0 && i<10)
   {
      return matiere[i];
   }
   // exection
}
void professeur::afficher()
{
   salaire::afficher();
   cout<<" diplome:"<<diplome<<endl; 
}

void professeur::ajouter(string m)
{

   int i =0;
   while (i<5  )
   {
      i++;
   }
  if (i<5)
  {
   matiere[i]=m;
  }
  
   
}
professeur::~professeur()
{

}

