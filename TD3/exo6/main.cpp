#include<iostream>
#include<cstdlib>
#include"tableau.h"
using namespace std;

int main()
{
    pile p(10);
  for (int i = 0; i < 10; i++)
  {
   p.empiler(rand()% 10 +1);
  }
  return 0;
  
}