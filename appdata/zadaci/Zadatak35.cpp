#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class primer
{
    public:
        static int broj;
        void brojac()
        {
            broj++;
        }
};
using namespace std;
int primer::broj=10;
int main()
{
    primer a,b;
    printf("\nBroj je : %d",a.broj);
    printf("\nBroj je : %d",b.broj);
    a.brojac();
    printf("\nBroj je : %d",a.broj);
    printf("\nBroj je : %d",b.broj);
    b.brojac();
    printf("\nBroj je : %d",a.broj);
    printf("\nBroj je : %d",b.broj);
    return 0;
}
