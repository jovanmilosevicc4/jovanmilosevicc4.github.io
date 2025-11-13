#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
struct telefon
{
    int mem,brzj;
    float mpx,duz,sir,deb,tez,dij;
};
int main()
{
    telefon samsung,iphone;
    printf("\nUnesite mem od samsunga pa ajfona\n");
    scanf("%d%d",&samsung.mem,&iphone.mem);
    if(samsung.mem>iphone.mem)printf("Samsung bolji");
    if(samsung.mem<iphone.mem)printf("Iphone bolji");
    if(samsung.mem==iphone.mem)printf("Isti su");
    return 0;
}
