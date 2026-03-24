#include <iostream>
using namespace std;
int sabiranje(int a,int b,int z,int c)
{
    if(a==b&&b==z) throw 67;
    if(a==b)b++;
    if(b==z)b++;
    if(z==a)a++;
    if (a<b&&a<z) return c+a;
    else if(b<a&&b<z) return c+b;
    else return c+z;
}
int main()
{
    int prvi,drugi,treci,zbir=0;
    while(1)
    {
        try
        {
            cout<<"\nUnesite brojeve\n";
            cin>>prvi>>drugi>>treci;
            zbir=sabiranje(prvi,drugi,treci,zbir);
            cout<<"\n"<<zbir<<"\n";
        }
        catch(int idp)
        {
            cout<<"\nKRAJ\n\n";
            break;
        }
    }
    return 0;
}
