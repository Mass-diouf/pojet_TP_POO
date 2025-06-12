#ifndef SOCIETE_H
#define SOCIETE_H

#include<iostream>
#include<cstring>

using namespace std;


struct valeur
{
    char marque[30];
    char gamme[30];
    int annee;
    char model[30];
    char presentation[100];

};
struct voiture
{
    char *cle;
    valeur val;
};

class societe
{
private:
    int ligne ;
    int colone;
    voiture *** tab;

public:
    societe(int, int  );
    societe(const societe &);
    void insertion( voiture* );
    void supprimer(char *);
    bool rechercher(char *);
    int hachage(char *);
    void affichage();

    societe & operator=(const societe &);
    ~societe();
};


struct liste
{
   char *cle;
    valeur val; 
    liste *suiv;
};
typedef liste *l;


class societe_listechaine
{
private:
    int ligne;
    l * tab;

public:
    
     societe_listechaine(int  );
     societe_listechaine(const  societe_listechaine &);
    void insertion( l  );
    void supprimer(char *);
    bool rechercher(char *);
    int hachage(char *);
    void affichage();

    societe_listechaine & operator=(const societe &);
    ~ societe_listechaine();
};








#endif
