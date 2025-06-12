#include<iostream>
#include"ensemble.h"
using namespace std;

int main()
{

    cout<<"bonjour";
    ensemble<int> e(10);
    for (int  i = 0; i < 10; i++)
    {
        e.ajouter(i);
    }
    e.afficher();
    ensemble<char> f(10);
    for (int  i = 0; i < 10; i++)
    {
        f.ajouter('a'+i);
    }
    f.afficher();
    
    
    
    
}