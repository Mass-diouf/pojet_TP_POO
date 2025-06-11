#include"tableau.h"






tableau::~tableau()
{
    delete [] tab;
}



pile::pile(int n) : tableau(n)
{
  cout << "Apl u constructeur " << this << endl;
  niveau=0;
}

bool pile::est_vide()
{
    return niveau == 0;
}

void pile :: empiler(int i)
{
   (*this)[niveau]=i;// A REVOIR
}

void pile ::depiler()
{ if (!est_vide())
{
     niveau--;
}

   
}

pile::~pile()
{
}