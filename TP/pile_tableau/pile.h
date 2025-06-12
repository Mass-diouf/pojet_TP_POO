#ifndef PILE_H
#define PILE_H
#include<iostream>
#include <string>       // Pour std::string
#include <sstream>      // Pour stringstream
#include <cctype>       // Pour isdigit()

using namespace std;
typedef int element;

 class pile
 {
 private:
    int taille;
    element *tab;
 public:
    pile();
    pile (const pile &);
    void empiler(element);
    void depiler();
    element sommet() const;
    bool estvide() const;
    void afficher();
    pile & operator=(const pile&);
    ~pile();
    void evaluation();
    void evaluation2();


 };
 
 
 int priorite(char op);
 string  conversionInfixeVersPostfixe(const string& infixe);

#endif