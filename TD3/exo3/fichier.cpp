#include"fichier.h"


salaire ::salaire(char * Nom , char * Prenom)
{
   nom= new char[strlen(Nom)];
   prenom= new char [strlen(Prenom)];
   strcpy(nom , Nom);
   strcpy(prenom , Prenom);

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
    matiere= new char*[10];
}

char * professeur:: get_diplome()
{
   return diplome ;
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

