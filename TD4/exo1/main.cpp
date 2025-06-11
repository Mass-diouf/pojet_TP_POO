#include<iostream>
#include<string>
#include"animal.h"

using namespace std;


int main()
{
    chat sylvestre("sylvestre"), tom("tom");
    souris jerry("jerry");
    canaris titi("titi");


    animal *tab[4];

    tab[0]=&sylvestre;
    tab[1]=&tom;
    tab[2]=&jerry;
    tab[3]=&titi;

    for (int i = 0; i < 4; i++)
    {
        tab[i]->exprimer();
         cout<<" " <<endl;
    }
    
}