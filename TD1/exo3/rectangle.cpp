#include"rectangle.h"

rectangle :: rectangle(int l , int L)
{
   longueur= l;
   largeur= L;
}
rectangle :: ~rectangle()
{

}

int rectangle ::getlongueur() const
{
    return longueur;
}
int rectangle ::getlargeur() const
{
    return largeur;
}

int rectangle :: perimetre() const 
{
    return 2*(longueur+largeur);
}
int rectangle :: surface() const 
{
    return (longueur*largeur);
}

void rectangle::setlongueur(int l)
{
   longueur=l;
}
void rectangle::setlargeur(int l)
{
   largeur=l;
}
bool rectangle:: comparer(const rectangle & c)
{
    if((longueur==c.longueur)&&(largeur==c.largeur))
       return true ;

    return false;   
}

void rectangle :: afficher()
{
    cout<< "longueur : "<< longueur << " "<< "largeur : "<< largeur  <<endl;
    
   
}