#include <iostream>
using namespace std;
int sabiranje(int &zbir,int x,int a,int b)
{
    zbir+=a;
    if(zbir>x) throw 0;
    return zbir;
}
int main()
{
    int duz,obim,x,zbir=0;
    cout<<"Unesite x\n";
    cin>>x;
    while(1)
    {
        try
    {
        cout<<"Unesite obim\n";
        cin>>obim;
        cout<<"Unesite duzinu\n";
        cin>>duz;
        zbir=sabiranje(zbir,x,obim,duz);
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
