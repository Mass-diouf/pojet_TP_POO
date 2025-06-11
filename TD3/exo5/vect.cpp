#include "vect.h"

vect :: vect(int val )
{
   n=val;
   adr= new int [val];
   if (!adr)
   {
     exit(-1);
   }
   
}
vect ::~vect()
{
    delete [] adr;
}

int & vect ::operator[](int i)
{
    if (i>=0 && i<n)
    {
       return adr[i];
    }
    else
    {
        //exception
    }
    
    
}
void vect ::afficher()
{
    for (int i = 0; i < n; i++)
    {
      cout<< adr[i];
      cout<<endl;
    }
    

}

//------------------------------------------------------------------------
vectb :: vectb(int inf , int sup): vect(sup-inf + 1)
{
   borne_inf=inf;
   borne_sup=sup;
}
vectb ::~vectb()
{
   
}

int & vectb ::operator[](int i)
{
       return vect :: operator[](i-borne_inf); 
}

void vectb ::afficher()
{
   vect::afficher();
    
}

