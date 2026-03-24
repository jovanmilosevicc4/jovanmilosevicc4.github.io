#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int i,niz[10],naj,poz,k,niz2[10];
    srand(time(0));
    for(i=0;i<10;i++)
    {

        niz[i]=rand()%100;
        printf("%d ",niz[i]);
        if(i==0||naj<niz[i])
        {
            naj=niz[i]; poz=i;
        }
    }
    printf("\nNajveci br %d poz %d\n",naj,poz);
    scanf("%d",&k);
    for(i=0;i<10;i++)
    {
        niz2[i]=niz[i]*k;
        printf("%d ",niz2[i]);
    }
    return 0;
}
