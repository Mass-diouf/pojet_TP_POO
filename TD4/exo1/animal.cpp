#include "animal.h"

animal ::animal(string nom)
{
  this->nom=nom;
}

animal ::~animal()
{

}
string animal ::getnom()
{
    return nom;
}


mammifere ::mammifere(string nom) : animal(nom)

{

}

mammifere ::~mammifere()
{

}
string mammifere ::getnom()
{
    return  animal::getnom();
}

oiseau ::oiseau(string nom): animal(nom)
{

}

oiseau ::~oiseau()
{

}
string oiseau ::getnom()
{
    return  animal::getnom();
}

chat :: chat(string nom ) :mammifere(nom)
{

}

chat ::~chat ()
{

}
string chat ::getnom()
{
    return  mammifere::getnom();
}
void chat::exprimer()
{
    cout<<"miaou";
}

souris ::souris(string nom ) : mammifere(nom)
{

}

souris ::~souris()
{

}
string souris ::getnom()
{
    return  mammifere::getnom();
}
void souris::exprimer()
{
    cout<<"couic";
}
canaris ::canaris(string nom ) : oiseau(nom)
{

}

canaris ::~canaris()
{

}
string canaris ::getnom()
{
    return  oiseau::getnom();
}

void canaris::exprimer()
{
    cout<<"cui-cui";
}