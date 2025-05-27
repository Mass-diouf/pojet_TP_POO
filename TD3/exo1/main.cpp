#include<iostream>
using namespace std;
#include"vect.h"

int main ()
{
    vect<int> v(10) ;
    for (int  i = 0; i < 10; i++)
    {
        v[i]=i*2;
    }
    for (int i = 0; i < 10; i++)
    {
       cout<<v[i]<<"  - ";
    }
    vect<char> v2(10) ;
    for (int  i = 0; i < 10; i++)
    {
        v2[i]='2'*3;
    }
    for (int i = 0; i < 10; i++)
    {
       cout<<v2[i]<<"  - ";
    }
    
    
    
}