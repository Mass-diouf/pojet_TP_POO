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