#ifndef FICHIER_H
#define FICHIER_H
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class salaire
{
   private:
   string nom; // j avais declare des tableaux mais il est inpossible de rtourner un tableau stctic lorsq le parametre est un *
   string prenom;
   public:
   salaire(string , string);
   salaire(const salaire &);
   salaire& operator=(const salaire&);
   ~salaire();
   string get_nom() const;
   string get_prenom() const;
   
   virtual void afficher();
    
};
class administration :public salaire
{
    private:
    string fonction;
    public:
    administration(string, string, string);
    administration(const administration &);
    administration& operator=(const administration&);
    ~administration();
    string get_fonction() const;
    void afficher();
};
class professeur : public salaire
{
private:
    string diplome;
    string matiere[5];
    
public:
    professeur(string , string , string );
    professeur(const professeur&);
    professeur& operator=(const professeur&);
    ~professeur();
    string get_diplome();
    string &operator[](int );
    void ajouter(string);
   
    void afficher();

};
// faire en sorte que la un proff peu recevoir plussieur matier
#endif