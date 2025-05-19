#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
using namespace std;

class rectangle
{
private:
    int longueur;
    int largeur;
public:
    rectangle(int l, int L);
    ~rectangle();
//  Explication : Le const après les () 
//signifie que cette méthode ne modifie pas les attributs de la classe.
int getlongueur() const;
int getlargeur() const;
int perimetre() const;
int surface() const;

// On utilise void car ces méthodes ne retournent rien, elles modifient juste les attributs.

void setlongueur(int );
void setlargeur(int);
bool operator==(const rectangle &);
friend ostream& operator<<(ostream& sortie ,const  rectangle & c) ;


};







#endif