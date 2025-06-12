#ifndef FORMATAGE_H
#define FORMATAGE_H
#include<iostream>
using namespace std;



class str
{
private:
   int long_str;
   char*chaine;
public:
    str();
    str(char *);
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
public:
    formatage();
    formatage(const char * , char );
    formatage( const str& , char );
    formatage(const formatage &);
    formatage & operator=(const char* &);
    formatage & operator=(const str &);
    void italique();
    void bold();
    void colorer();
    void affichage();
    ~formatage();
};














#endif