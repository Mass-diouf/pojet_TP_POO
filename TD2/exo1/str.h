#ifndef STR_H
#define STR_H
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
};






#endif