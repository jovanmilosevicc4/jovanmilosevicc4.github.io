#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
   FILE *pok;
   FILE *pok2;
   pok=fopen("podaci4.txt","w");
   srand(time(0));
   int x;
   for(int i =0;i<10;i++){
       x=rand()%100;
       fprintf(pok,"%d\n",x);}
   fclose(pok);
   pok2=fopen("podaci3.txt","w");
   srand(time(0));
   int y;
   for(int i =0;i<10;i++){
       y=rand()%100;
       fprintf(pok2,"%d\n",y);}
   fclose(pok2);
   pok=fopen("podaci4.txt","r");
   pok2=fopen("podaci3.txt","r");
   FILE *pok3;
   pok3=fopen("podaci5.txt","w");
   do{
       fscanf(pok,"%d",&x);
       fscanf(pok2,"%d",&y);
       if(feof(pok)==0){
           printf("%d\n",x+y);
           fprintf(pok3,"%d\n",x+y);}}
   while(feof(pok)==0);
   fclose(pok);
   fclose(pok2);
   fclose(pok3);
   return 0;}
