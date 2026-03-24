#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
using namespace std;
int main()
{
   FILE *pok;
   char niz[100][50];
   char niz2[100][50];
   int breci=0;
   pok=fopen("podaci2.txt","r");
   while (fscanf(pok, "%49s", niz[breci]) == 1){
       breci++;}
   fclose(pok);
   for (int i = 0; i < breci; i++){
   int s = 0;
       for (int j = i + 1; j < breci; j++){

           if (strcmp(niz[i], niz[j]) == 0){
               strcpy(niz2[i], niz[j]);
               s = 1;
               break;}}
        if (!s){
           printf("%s\n", niz[i]);
       }
   }
   return 0;
}
