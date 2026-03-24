#include <iostream>
using namespace std;
int sabiranje(int prvi,int drugi)
{
    if(prvi%2!=0) throw drugi+prvi;
    return drugi+prvi;
}
int main()
{
    int a,b=0;
    while(1)
    {
        try
        {
            cout<<"Unesite broj\n";
            cin>>a;
            b=sabiranje(a,b);
        }
        catch(int kraj)
        {
            cout<<"\nUneli ste ne paran broj\nUkupan zbir je "<<kraj<<"\n\n";
            break;
        }
    }
    return 0;
}
