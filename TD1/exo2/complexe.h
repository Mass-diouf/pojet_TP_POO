#include<iostream>
using namespace std;

class complexe
{
private:
    double image;
    double reel;

public:
    complexe(double , double );
    ~complexe();
    // getteur
    double imaginaire();
    double reelle();
    double module();
    complexe & ajouter(const complexe &);
    complexe & multiplier(const complexe &);
    void afficher();



};


