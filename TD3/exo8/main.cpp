#include<iostream>
#include<string>
#include"compte.h"
using namespace std;



int main ()
{ long l=0;
    compte c(l);

    comptecour cc(l);
    comptEpargne ce(l , 20);

    compte * c1= &cc;
    

}