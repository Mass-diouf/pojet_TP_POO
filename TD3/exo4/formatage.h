#ifndef FORMATAGE_H
#define FORMATAGE_H
#include<iostream>
#include<cstring>
using namespace std;



class str
{
protected:
   int long_str;
   char * chaine;
public:
    str();
    str(const char *);
    str(const str &);
    ~str();
    str & operator=(const str &);//ici on pense a l effectation multiple c est la raison pour la quelle on retourne une reference 
    bool operator==(const str &);
    str operator+(const str &); //ici on retourne par valeur puis que c une variable local k on vas retourner
    char & operator[](int i);
    void affichage();
};

class formatage: public str
{
private:
    char f;
    char * couleur;
public:
    formatage();
    formatage(const char * , char , char *);
    formatage( const str& , char , char * );
    formatage(const formatage &);
    formatage & operator=(const formatage &);
    formatage & operator=(const str &);
    void italique();
    void bold();
    void colorer(char * col);
    void affichage();
    ~formatage();
};














#endif