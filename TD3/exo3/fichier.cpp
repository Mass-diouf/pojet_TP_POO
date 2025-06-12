#include"fichier.h"


salaire ::salaire(char * Nom , char * Prenom)
{
   nom= new char[strlen(Nom)];
   prenom= new char [strlen(Prenom)];
   strcpy(nom , Nom);
   strcpy(prenom , Prenom);

}
salaire:: salaire(const salaire& s)
{
   nom= new char[strlen(s.nom)];
   prenom= new char [strlen(s.prenom)];
   strcpy(nom , s.nom);
   strcpy(prenom , s.prenom); 
}

salaire& salaire :: operator=(const salaire & s)
{
   if (this==&s)
   {
      return(*this);
   }
   delete nom;
   delete prenom;
   nom= new char[strlen(s.nom)];
   prenom= new char [strlen(s.prenom)];
   strcpy(nom , s.nom);
   strcpy(prenom , s.prenom); 

    return(*this);
   
}

char * salaire ::get_nom() const
{
   return nom;
}
char * salaire ::get_prenom() const
{
   return prenom;
}
void salaire::afficher()
{
    cout<<" prenom :"<<prenom<<" nom : "<<nom<<endl;
}
salaire::~salaire()
{
    delete prenom;
    delete nom;
}

administration ::administration(char * prenom , char * nom , char * f) :salaire(nom,prenom)
{
   fonction= new char [strlen(f)];
   strcpy(fonction , f);
   
}

administration ::administration(const administration& a) : salaire(a)
{
   fonction=new char [strlen(a.fonction)];
   strcpy(fonction, a.fonction);
}

administration& administration::operator=(const administration & a) 
{
   if (this==&a)
   {
     return (*this);
   }
    salaire:: operator=(a);
    fonction=new char [strlen(a.fonction)];
   strcpy(fonction, a.fonction);


   return (*this);
   
}
 char * administration:: get_fonction() const
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
   delete fonction;
}
professeur :: professeur(char * prenom , char * nom , char * d) : salaire(nom, prenom)
{
    diplome= new char [strlen(d)];
    strcpy(diplome , d);
    int i=0;
    while (i<5)
    {
      matiere[i]=nullptr;
    }
    
}

char * professeur:: get_diplome()
{
   return diplome ;
}

professeur:: professeur(const professeur & p) : salaire(p)
{
   diplome= new char [strlen(p.diplome)];
   strcpy(diplome , p.diplome );
}

professeur & professeur:: operator=(const professeur & p)
{
   if (this ==&p)
   {
     return (*this);
   }
   salaire :: operator=(p);
   delete diplome;
   diplome= new char [strlen(p.diplome)];
   strcpy(diplome , p.diplome );


   return (*this);
   
}
char *& professeur::operator[](int i)
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

void professeur::ajouter(char * m)
{

   int i =0;
   while (i<5 && matiere[i] )
   {
      i++;
   }
  if (i<5)
  {
   matiere[i]=m;
  }
  
   
}

