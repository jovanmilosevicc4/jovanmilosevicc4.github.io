#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
class valjak
{
private:
    int obim,h;
public:
    void set(int x,int y)
    {
        this->obim=x;
        this->h=y;
    }
    float get()
    {
        return (obim/6.28)*(obim/6.28)*3.14*h;
    }
};
int main()
{
    srand(time(0));
    valjak niz[10];
    float uk=0;
    for(int i=0;i<10;i++)
    {
        int a,b;
        a=rand()%100+1;
        b=rand()%100+1;
        niz[i].set(a,b);
        uk+=niz[i].get();
        cout<<"Zapremina valjka br."<<i+1<<" zapremina je "<<niz[i].get()<<endl;
    }
    cout<<endl<<"Ukupno je "<<uk<<endl;
    return 0;
}
