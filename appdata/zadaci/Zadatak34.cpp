#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    FILE * pok;
    srand(time(0));
    int a;
    int niz[39][2];
    for(int i=0;i<39;i++)
    {
        niz[i][0]=i+1;
        niz[i][1]=0;
    }
    pok=fopen("loto.txt","w");
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<7;j++)
        {
            a=rand()%39+1;
            niz[a-1][1]+=1;
            fprintf(pok,"%d ",a);
        }
        fprintf(pok,"\n");
    }
    fclose(pok);
    int z,poz;
    for(int i=0;i<39;i++)
    {
        if(i==0||z<niz[i][1])
            {
                z=niz[i][1];
                poz=i+1;
            }
    }
    printf("\nNajvise se pojavio broj %d i to %d puta\n",poz,z);
    printf("\nTaj broj se pojavljuje u linijama:\n");
    pok=fopen("loto.txt","r");
    do
    {
        for(int i=0;i<100;i++)
    {
        for(int j=0;j<7;j++)
        {
            fscanf(pok,"%d",&a);
            if(a==poz&&feof(pok)==0)
            {
                for(int l=0;l<7;l++)
                {
                    fscanf(pok,"%d",&a);
                    printf("%d ",a);
                }
                printf("\n");
                a=0;
            }
        }
    }
    }while(feof(pok)==0);

    fclose(pok);
    return 0;
}
