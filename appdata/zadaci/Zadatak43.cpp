#include <iostream>
#include <stdio.h>
using namespace std;
class saberi
{

public:
    int sabiranje(int x,int y){return x+y;}
    int sabiranje(int x,int y,int z){return (x*(y+z));}
    double sabiranje(double x,double y){return x+y;}
    int sabiranje(int x,int y,int z,int q)
    {
        int rezultat;
        if(q==1)rezultat = x+y+z;
        if(q==2)rezultat = x*y*z;
        if((q!=2)&&(q!=1))rezultat=x;
        return rezultat;
    }

};
int main()
{
    saberi a;
    cout<<"Unesi 4 cela broja i 2 realna:\n";
    int e,b,c,d;
    double r,t;
    cin>> e >> b >> c >> d >> r >> t;
    cout<<"Rezultat je "<<a.sabiranje(e,b)<<"\n";
    cout<<"Rezultat je "<<a.sabiranje(e,b,c)<<"\n";
    cout<<"Rezultat je "<<a.sabiranje(t,r)<<"\n";
    cout<<"Rezultat je "<<a.sabiranje(e,b,c,d)<<"\n";
    return 0;
}
