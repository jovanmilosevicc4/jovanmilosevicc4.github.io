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
   int poz,opcija=0,n=10;
   float naj,pro;
   srand(time(0));
   for(int i=1;i<=n;i++){a.srp=rand()%5+1;a.mat=rand()%5+1;a.fiz=rand()%5+1;lista.push_back(a);}
   while(opcija>=0&&opcija<3){
   printf("Izaberite opcije od 0 do 3:\n0-spisak ocena\n1-unos clana\n2-unos clana na kraj liste\n3-izlaz\n");
   scanf("%d",&opcija);
   if(opcija==1)//POCETAK OPCIJE 1{
       list<ocene>::iterator x;
       x=lista.begin();
       int broj=-1;
       while(broj<0||broj>n){
           printf("\nKoje mesto zelite da menjate??\n");scanf("%d",&broj);}
       broj--;
       advance(x,broj);
       int temp=0;
       while(a.srp<1||a.srp>5||a.mat<1||a.mat>5||a.fiz<1||a.fiz>5||temp==0){
           printf("\nUnesite ocenu iz srpskog,matematike pa fizike\n");
           scanf("%d%d%d",&a.srp,&a.mat,&a.fiz);
           temp=1;}*x=a;
       opcija=0;}//KRAJ OPCIJE 1
   else if(opcija==2)//POCETAK OPCIJE 2{
       int temp=0;
       while(a.srp<1||a.srp>5||a.mat<1||a.mat>5||a.fiz<1||a.fiz>5||temp==0){
           printf("\nUnesite ocenu iz srpskog,matematike pa fizike\n");
           scanf("%d%d%d",&a.srp,&a.mat,&a.fiz);
           temp=1;}lista.push_back(a);
       n++;opcija=0;}//KRAJ OPCIJE 2
   if(opcija==0){//OPCIJA 0
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
   printf("\nNajveci prosek ima br %d sa %.2f\n\n",poz,naj);}//KRAJ OPCIJE 0}
   return 0;
}

