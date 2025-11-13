#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
struct njiva
{
    int duz,sir,dim;
};
int main()
{
    njiva niz[10];
    int naj,poz;
    srand(time(0));
    for(int i=0;i<10;i++)
    {
        niz[i].duz=rand()%100;
        niz[i].sir=rand()%100;
        niz[i].dim=niz[i].duz*niz[i].sir;
        printf("%d mesto %d %d = %d\n",i,niz[i].duz,
               niz[i].sir,niz[i].dim);
        if(i==0||naj < niz[i].dim)
            {
                naj=niz[i].dim;poz=i;
            }
    }
    printf("\nNajveca njiva %d poz %d",naj,poz);
    return 0;
}
