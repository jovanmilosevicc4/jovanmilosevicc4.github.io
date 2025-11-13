#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
struct tacka{
    int x,y;};
int main(){
 FILE * pok;
 tacka a;
 int i,x;
 srand(time(0));
 pok=fopen("tacke.bin","wb");
 for(i=0;i<10;i++){
     a.x=rand()%100+1;
     a.y=rand()%100+1;
     fwrite(&x,sizeof(a),1,pok);}
 fclose(pok);
 i=1;
 pok=fopen("tacke.bin","rb");
 while(feof(pok)==0){
     fread(&a,sizeof(a),1,pok);
     if(feof(pok)==0){
         printf("%d tacka je x=%d,y=%d\n",i,a.x,a.y);}
     i++;}
 fclose(pok);
 return 67;};
