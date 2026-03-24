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
   float povrs(){
       return r*r*3.14;
   }};

int main(){
  krug niz[10];
  srand(time(0));
  int x,naj,poz;
  for(int i=0;i<10;i++){
     x=rand()%49+1;
     niz[i].dodeli(x);
     printf("%d. r=%d O=%.2f P=%.2f \n",i,x,niz[i].obim(),niz[i].povrs());
     if(i==0||niz[i].obim()>naj){
         naj=niz[i].obim();
         poz=i;}}
    printf("\n Najveci obim je %.2f na poziciji %.2f\n",niz[poz].obim(),poz);
    return 0;
}
