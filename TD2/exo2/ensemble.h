#ifndef ENSEMBLE_H
#define ENSEMBLE_H
#include<iostream>
using namespace std;


class ensemble
{
private:
    int taille;
    int position;
    int courant ;
    int *tab;
public:
    ensemble(int );
    ensemble(const ensemble& e);
    int cardinal();
    void ajouter(int ); // j ai mis void parsceque c est l objet appelant qui est modifier
    void supprimer(int); // j ai mis void parsceque c est l objet appelant qui est modifier
    bool contient(int ); // ici j verifie si un element donner en parametre est dans l ensemble
    void afficher();
    ensemble & operator<<(int ); // j retourner une referance parceque on modifie l objet apple cette fonction permet d ajouter un element dans le tableau
    ensemble & operator>>(int ); // j retourner une referance parceque on modifie l objet apple cette fonction permet de supprimer un element dans le tableau
    bool operator%(int ) const; //permet de verient la presence d un elemnt dans le tableau
    ensemble & operator=(const ensemble &); 
    ensemble operator+(const ensemble &); // ici j ne retoune pas de reference car c est un variable local qu on vas retourner cette foncton fait l union de deux ensemble
    ensemble operator*(const ensemble &); // ici j ne retoune pas de reference car c est un variable local qu on vas retourner cette fonction fait l intersection de deux ensemble 
    void init(); //initialise le parcour d un ensemble
    bool existe();//teste s il y a encors un elemnt a traiter
    int * prochain(); // retounr le prochain element a traiter 




    ~ensemble();
};




#endif
