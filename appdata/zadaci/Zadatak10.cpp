#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
struct radnik
{
    int brh,plt,uk;
};
int main()
{
    radnik zika,mika;
    printf("Unesite sate i platu zike pa mike\n");
    scanf("%d%d%d%d",&zika.brh,&zika.plt,

          &mika.brh,&mika.plt);
    zika.uk=zika.brh*zika.plt;
    mika.uk=mika.brh*mika.plt;
    if(zika.uk>mika.uk)printf("Zika ima vecu");
    if(zika.uk<mika.uk)printf("Mika ima vecu");
    if(zika.uk==mika.uk)printf("Ista im je");

    return 0;
}
