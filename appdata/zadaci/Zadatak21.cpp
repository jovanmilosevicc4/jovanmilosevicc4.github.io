#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>
using namespace std;

struct tacka{
int x,y;};
int main()
{
    list<tacka> tacke;
    tacka element;
    for(int i=1;i<=10;i++)
    {
        element.x=i*10;
        element.y=i*20;
        tacke.push_back(element);
    }
    printf("Sadrzaj liste:\n\n");
    int z=1;
    list <tacka>::iterator r;
    r=tacke.begin();
    for(r=tacke.begin();r!=tacke.end();r++)
    {
        element=*r;
        printf("%dTacka liste ima koordinate: %d i %d\n",z,element.x,element.y);
        z++;
    }
    r=tacke.begin();
    advance(r,4);
    element=*r;
    printf("\n\n%d i %d",element.x,element.y);
    element.x=123;
    element.y=546;
    *r=element;
    advance(r,2);
    tacke.erase(r);
    element.x=111;
    element.y=888;
    tacke.push_back(element);
    z=1;
    for(r=tacke.begin();r!=tacke.end();r++)
    {
        element=*r;
        printf("%dTacka liste ima koordinate:%d i %d\n",z,element.x,element.y);
        z++;
    }
    return 0;
}
