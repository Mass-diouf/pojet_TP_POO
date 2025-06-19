#ifndef INDIVIDU_H
#define INDIVIDU_H

#include <iostream>
#include <string>
using namespace std;

class base {
public:
    virtual void afficher() = 0;
    virtual int clef() = 0;
    virtual ~base() {
        cout << "Destructeur base" << endl;
    }
};


class individu : public base {
protected: //  optionnel pour accès dans employe
    int cle;
    string nom;
    string prnom;
public:
    individu(int=0, string=" ", string=" ");// c est par defeaut c est possoble
    int clef();           void afficher();
    ~individu();
};

#endif
