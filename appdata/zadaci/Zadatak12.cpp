#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
struct cepanice
{
    int duz,r;
    float p;
};
int main()
{
    cepanice niz[1000];
    float br;
    srand(time(0));
    for(int i=0;i<1000;i++)
    {
        niz[i].duz=rand()%35+10;
        niz[i].r=rand()%15+5;
        niz[i].p=niz[i].r*niz[i].r*3.14*niz[i].duz;
        printf("%d mesto %d %d = %.2f\n",i,niz[i].duz,
               niz[i].r,niz[i].p);
        br+=niz[i].p/100;
    }
    printf("\nDedi je spremio %.2f m^3 cepanica",br);

    return 0;
}
