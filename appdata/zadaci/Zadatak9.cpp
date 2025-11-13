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
    bazen niz[10];
    int naj,poz;
    srand(time(0));
    for(int i=0;i<10;i++)
    {
        niz[i].duz=rand()%100;
        niz[i].sir=rand()%100;
        niz[i].dub=rand()%100;
        niz[i].povr=niz[i].dub*niz[i].sir*niz[i].duz;
        printf("%d mesto %d %d %d = %d\n",i,niz[i].duz,
               niz[i].sir,niz[i].dub,niz[i].povr);
        if(i==0||naj < niz[i].povr)
            {
                naj=niz[i].povr;poz=i;
            }
    }
    printf("\nNajveci je %d poz %d",naj,poz);
    return 0;
}
