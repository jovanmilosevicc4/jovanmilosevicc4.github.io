#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

float fun(float x,float y)
{
    if(x<y)
        return x;
    if(x>=y)
        return y;
}
int main()
{
 float a,b;
 printf("\nUnesite dva broja\n");
 scanf("%f%f",&a,&b);
 printf("Najmanji broj je %.2f",fun(a,b));
 return 0;
}
