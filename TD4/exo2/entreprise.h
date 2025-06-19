#ifndef ENTREPRISE_H
#define ENTREPRISE_H

#include "employe.h"
#include <string>
using namespace std;

class entreprise : public base
 {
private:
    individu directeur;    
    string nom;
    int nb_salaries;    

public:
    entreprise(string, individu, int);  
    void afficher();
    ~entreprise();  
};

#endif
