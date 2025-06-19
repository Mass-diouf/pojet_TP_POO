#include "animal.h"

animal ::animal(string nom)
{
  this->nom=nom;
}

animal ::~animal()
{

}



mammifere ::mammifere(string nom) : animal(nom)

{

}

mammifere ::~mammifere()
{

}


oiseau ::oiseau(string nom): animal(nom)
{

}

oiseau ::~oiseau()
{

}


chat :: chat(string nom ) :mammifere(nom)
{

}

chat ::~chat ()
{

}

void chat::exprimer()
{    cout<<animal:: nom <<"  : ";
    cout<<"miaou";
}

souris ::souris(string nom ) : mammifere(nom)
{

}

souris ::~souris()
{

}

void souris::exprimer()
{   
     cout<< animal::nom <<"  : ";

    cout<<"couic";
}
canaris ::canaris(string nom ) : oiseau(nom)
{

}

canaris ::~canaris()
{

}


void canaris::exprimer()
{
     cout<< animal:: nom <<"  : ";
    cout<<"cui-cui";
}