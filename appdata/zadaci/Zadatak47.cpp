#include <iostream>
using namespace std;
float deljenje(float x,float y)
{
    float temp;
    if(y==0)throw 10;
    if(y==1)throw "GRESKA!!!";
    temp=x/y;
    return temp;
}
int main()
{
    float a,b,rez;
    cout<<"Unesite prvi broj\n";
    cin>>a;
    cout<<"Unesite drugi broj\n";
    cin>>b;
    try{
        rez=deljenje(a,b);
        cout<<"\n\nRezultat je "<<rez<<"\n\n";
    }
    catch(int pp){
        if(pp==10)cout<<"ZABRANJENO DELJENJE SA 0!!!";
    }
    catch(const char *poruka)
    {
        cout<<poruka<<endl;
    }
    return 0;
}
