#include <iostream>
#include <stdio.h>
using namespace std;


int main()

{
    int n;
    float b,k=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&b);
        k+=b;

    }
    printf("\n%f\n",k);
    return 0;
}
