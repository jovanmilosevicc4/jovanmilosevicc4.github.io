#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
struct bazen
{
    int duz,sir,dub,povr;
};
int main()
{
    bazen zika,mika;
    printf("Unesite dimenzije zikinog pa mikinog bazena\n");
    scanf("%d%d%d%d%d%d",&zika.duz,&zika.sir,&zika.dub,
          &mika.duz,&mika.sir,&mika.dub);
    zika.povr=zika.duz*zika.sir*zika.dub;
    mika.povr=mika.duz*mika.duz*mika.duz;
    if(zika.povr>mika.povr)printf("Zika ima veci");
    if(zika.povr<mika.povr)printf("Mika ima veci");
    if(zika.povr==mika.povr)printf("Isti im je");
    return 0;
}
