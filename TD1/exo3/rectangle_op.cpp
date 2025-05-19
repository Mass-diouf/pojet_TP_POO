#include"rectangle_op.h"


bool rectangle:: operator==(const rectangle & c)
{
   if ((longueur==c.longueur)&&(largeur==c.largeur))
   {
    return true;
   }
   return false;
   
}
 ostream& operator<<(ostream& sortie ,const  rectangle & c) 
{
  sortie <<"longueur : "<<c.longueur<<"largeur : "<< c.largeur;

  return sortie;
}