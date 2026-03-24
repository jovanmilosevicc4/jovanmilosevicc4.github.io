#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
class bazen
{
private:
    int duz,sir,dub;
public:
 void dodeli(int x,int y,int z)
 {
     duz=x;
     sir=y;
     dub=z;
 }
 int zap()
 {
     return duz*sir*dub;
 }
};

int main()
{
  bazen zika,mika;
  int a,b,c;
  printf("\nUnesite vecilicine Zike:\n");
  scanf("%d%d%d",&a,&b,&c);
  zika.dodeli(a,b,c);
  printf("\nUnesite vecilicine Mike:\n");
  scanf("%d%d%d",&a,&b,&c);
  mika.dodeli(a,b,c);
  if(zika.zap()>mika.zap())printf("\nZika ima veci");
  if(zika.zap()<mika.zap())printf("\nMika ima veci");
  if(zika.zap()==mika.zap())printf("\nIsti im je");
  return 0;
}
