#ifndef COMPTE_H
#define COMPTE_H
#include<iostream>
#include<string>
using namespace std;


class compte
{
private:
long numero;
double solde;
public:
    compte(long&);
    compte(const compte &);
   virtual void affiche_toi();
    void versement(double);
    bool retrait(double);
   compte & operator=(const compte &);
    ~compte();
};
class comptecour : public compte
{
private:
    
public:
     bool retrait(double);
     void affiche_toi();
    comptecour(long);
    ~comptecour();
};

class comptEpargne : public compte
{
private:
    double taux;
public:
    double calculInteret();
    void affiche_toi();
    comptEpargne(long, double );
    ~comptEpargne();
};











#endif
