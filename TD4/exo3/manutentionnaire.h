#ifndef MANITENTIONNAIRE_H
#define MANITENTIONNAIRE_H


#include "employe.h"


class manutentionnaire : public employe
{
private:
    int nb_heure;
public:
    manutentionnaire(string , string , int , int );
    double CalculeSalaire();
    void affichage();
    ~manutentionnaire();
};











#endif