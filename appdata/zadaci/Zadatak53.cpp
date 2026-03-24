#include <iostream>
using namespace std;
int sabiranje(int a,int b,int c)
{
    if(a==b) throw 67;
    if (a>b) return a+c;
    else return b+c;
}
int main()
{
    int prvi,drugi,zbir=0;
    while(1)
    {
        try
        {
            cout<<"\nUnesite brojeve\n";
            cin>>prvi>>drugi;
            zbir=sabiranje(prvi,drugi,zbir);
            cout<<"\n"<<zbir<<"\n";
        }
        catch(int edp)
        {
            cout<<"\nKRAJ\n\n";
            break;
        }
    }
    return 0;
}
