#ifndef FICHIER_H
#define FICHIER_H
#include<iostream>
#include<cstring>

using namespace std;

class salaire
{
   private:
   char *nom; // j avais declare des tableaux mais il est inpossible de rtourner un tableau stctic lorsq le parametre est un *
   char *prenom;
   public:
   salaire(char * , char *);
   salaire(const salaire &);
   salaire& operator=(const salaire&);
   ~salaire();
   char * get_nom() const;
   char * get_prenom() const;
   
   void afficher();
    
};
class administration :public salaire
{
    private:
    char * fonction;
    public:
    administration(char * , char *, char *);
    administration(const administration &);
    administration& operator=(const administration&);
    ~administration();
    char * get_fonction() const;
    void afficher();
};
class professeur : public salaire
{
private:
    char  *diplome;
    char  *matiere[5];
    
public:
    professeur(char * , char * , char * );
    professeur(const professeur&);
    professeur& operator=(const professeur&);
    ~professeur();
    char * get_diplome();
    char * &operator[](int );
    void ajouter(char*);
   
    void afficher();

};
// faire en sorte que la un proff peu recevoir plussieur matier
#endif