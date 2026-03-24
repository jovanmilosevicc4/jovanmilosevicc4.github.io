#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <time.h>
struct ocene{
int srp,mat,fiz;};
using namespace std;
int main(){
   list<ocene> lista;
   ocene a;
   int poz;
   float naj,pro;
   srand(time(0));
   for(int i=1;i<=10;i++){
       a.srp=rand()%5+1;
       a.mat=rand()%5+1;
       a.fiz=rand()%5+1;
       lista.push_back(a);}
   list<ocene>::iterator x;
   int brojac=1;
   for(x=lista.begin();x!=lista.end();x++){
       a=*x;
       printf("%d. s = %d m = %d f = %d\n",brojac,a.srp,a.mat,a.fiz);
       pro=float(a.srp+a.mat+a.fiz)/3;
       if(brojac==1||pro>naj){
           naj=pro;
           poz=brojac;}
       brojac++;}
   printf("\nNajveci prosek ima br %d sa %.2f",poz,naj);
   return 0;}
