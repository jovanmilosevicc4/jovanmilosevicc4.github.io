#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int i,niz[10]:
    srand(time(0));
    for(i=0;i<10;i++)
    {
        niz[i]=rand()%100;
        printf("%d ",niz[i]);
    }
    return 0;
}
