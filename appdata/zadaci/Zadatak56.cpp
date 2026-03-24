#include <iostream>
#include <math.h>
using namespace std;
int funk(int niz[],int vel)
{
    int fin=0,x=vel,deset=1;
    for(int i=0;i<vel;i++)
    {
        for(int i=1;i<x;i++)deset*=10;
        fin+=niz[i]*deset;
        x--;
        deset=1;
    }
    return fin;
}
int main()
{
    int N;
    cout<<"Unesite broj N:\n";
    cin>>N;
    int brojevi[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Unesite "<<i+1<<". broj:\n";
        cin>>brojevi[i];
    }
    cout<<"\nOvo vljd "<<funk(brojevi,N)<<". broj:\n";
    return 0;
}
