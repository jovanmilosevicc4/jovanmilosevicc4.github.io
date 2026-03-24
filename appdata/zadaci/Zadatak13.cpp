#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int fun(int x,int y)
{
    return x*y;
}
struct voz
{
    int brvag,brput,uk;
};
int main()
{
    voz cira,spira;
    printf("Unesite brvag i brput za ciru pa spiru\n");
  scanf("%d%d%d%d",&cira.brvag,&cira.brput,
        &spira.brvag,&spira.brput);
  cira.uk=fun(cira.brvag,cira.brput);
  spira.uk=fun(spira.brvag,spira.brput);
  if(cira.uk>spira.uk)printf("Cira ima veci kapacitet");
  if(cira.uk<spira.uk)printf("Spira ima veci kapacitet");
    if(cira.uk==spira.uk)printf("Isti im je");
    return 0;
}
