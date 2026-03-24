#include <iostream>
using namespace std;
int sabiranje(int &zbir,int x,int a)
{
    zbir+=a;
    if(zbir>x) throw 0;
    return zbir;
}
int main()
{
    int broj,x,zbir=0;
    cout<<"Unesite x\n";
    cin>>x;
    while(1)
    {
        try
    {
        cout<<"Unesite broj\n";
        cin>>broj;
        zbir=sabiranje(zbir,x,broj);
        cout<<zbir<<"\n";
    }
        catch(int pp)
    {
        if(pp==0){cout<<"\n\n"<<"Finalna vrednost "<<zbir<<"\n\n";
        return 0;}
    }
    }
    return 0;
}
