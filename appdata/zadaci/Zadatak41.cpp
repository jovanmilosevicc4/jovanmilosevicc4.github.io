#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

class radnik
{
private:
    int cps,brs;
public:
    void set(int x,int y)
    {
        this->cps=x;
        this->brs=y;
    }
    int get()
    {
        return this->cps*this->brs;
    }
};
int main()
{
    srand(time(0));
    int maxi,poz;
    radnik niz[100];
    for(int i=0;i<100;i++)
    {
        int a,b;
        a=rand()%100+1;
        b=rand()%100+1;
        niz[i].set(a,b);
        if(i==0||maxi<niz[i].get())
        {
            maxi=niz[i].get();
            poz=i;
        }
    }
    cout<<endl<<"Najvecu platu ima radnik br."<<poz+1<<" a plata mu je "<<maxi<<endl;
    return 0;
}
