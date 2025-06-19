#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "individu.h"
#include<string>

class employe : public individu
{
private:
    string competence;
public:
    employe(int ,string , string , string );
       void afficher();
    int clef();

    ~employe();
};

#endif
