#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
class krug
{
private:
    int r;
public:
   void dodeli(int x)
   {
       r=x;
   }
   float obim()
   {
       return 2*r*3.14;
   }
   int povrs()
   {
       return r*r*3.14;
   }
};

int main()
{
   krug a,b;
   int x;
   printf("\nUnesite velicinu a:\n");
   scanf("%d",&x);
   a.dodeli(x);
   printf("\nUnesite velicinu b:\n");
   scanf("%d",&x);
   b.dodeli(x);
   if(a.povrs()>b.povrs())printf("\nkrug a je veci");
   if(a.povrs()<b.povrs())printf("\nkrug b je veci");
   if(a.povrs()==b.povrs())printf("\nkrugovi su isti");
   return 0;
}
