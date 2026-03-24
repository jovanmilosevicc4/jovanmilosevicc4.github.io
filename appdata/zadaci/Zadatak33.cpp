#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct radnik
{
    int brs,cps;
};
int main()
{
    FILE * pok;
    FILE * rok;
    srand(time(0));
    radnik a;int b;
    pok=fopen("text.bin","wb");
    for(int i=0;i<10;i++)
    {
        a.brs=rand()%100;
        a.cps=rand()%100;
        fwrite(&a,sizeof(a),1,pok);
    }
    fclose(pok);
    rok=fopen("text.bin","rb");
    pok=fopen("text2.bin","wb");
    for(int i=0;i<10;i++)
    {
        fread(&a,sizeof(a),1,rok);
        b=a.brs*a.cps;
        fwrite(&b,sizeof(b),1,pok);
    }
    fclose(pok);
    fclose(rok);
    pok=fopen("text2.bin","rb");
    do
    {;
        fread(&b,sizeof(b),1,pok);
        if(feof(pok)==0)
        printf("%d - plataaa \n",b);
    }while(feof(pok)==0);
    fclose(pok);
    return 0;
}
