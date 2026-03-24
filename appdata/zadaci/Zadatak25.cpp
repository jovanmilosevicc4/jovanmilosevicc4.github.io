#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
   FILE *pok;
   pok=fopen("podaci.txt","w");
   srand(time(0));
   int x;
   for(int i =0;i<10;i++){
       x=rand()%100;
       fprintf(pok,"%d\n",x);}
   fclose(pok);
   pok=fopen("podaci.txt","a");
   x=555;
   fprintf(pok,"%d\n",x);
   fclose(pok);
   pok=fopen("podaci.txt","r+");
   fseek(pok,2*sizeof(int),SEEK_SET);
   x=9999;
   fprintf(pok,"%d\n",x);
   fclose(pok);
   pok=fopen("podaci.txt","r");
   do{
       fscanf(pok,"%d",&x);
       if(feof(pok)==0)
           printf("%d\n",x);}
   while(feof(pok)==0);
   fclose(pok);

   return 0;}
