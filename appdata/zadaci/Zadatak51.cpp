#include <iostream>
using namespace std;
int oduzimanje(int a,int b,int c)
{
        if(a-b>0) return b;
        throw c;
}
int main()
{
    int iznos,rata,i;
    int uplaceno;
    iznos=rata=uplaceno=i=0;
    cout<<"Uneite iznos kredita\n";
    cin>>iznos;
    while(1)
    {
        try{
            i++;
            cout<<i<<". rata\n";
            cin>>rata;
            uplaceno=oduzimanje(iznos,rata,i);
            iznos-=uplaceno;
        }
        catch(int pp)
        {
            cout<<"\nIsplaceno je nakon "<<pp<<" rata.\n";
            return 0;
        }
    }
    return 0;
}
