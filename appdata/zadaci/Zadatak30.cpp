#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
struct tacka{
    int x,y;};
int main(){
 FILE * pok;
 tacka a,b;
 int i,x;
 float c,d;
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
     c=sqrt(pow(a.x,2)+pow(a.y,2));
     d=sqrt(pow(b.x,2)+pow(b.y,2));
     if(c<d){
         b.x=a.x;
         b.y=a.y;}
     if(feof(pok)==0){
         printf("%d tacka je x=%d,y=%d\n",i,a.x,a.y);}
     i++;}
 printf("\nNajbliza tacka ima koordinate x=%d y=%d\n\n",b.x,b.y);
 fclose(pok);
 return 67;};
