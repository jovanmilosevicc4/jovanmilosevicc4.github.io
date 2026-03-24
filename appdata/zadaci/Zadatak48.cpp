#include <iostream>
using namespace std;
string provera(int &godine)
{
    if(godine<18) throw "Maloletnik";
    godine=15;
    return "Ok";
}
int main()
{
    int godine;
    string text;
    cout<<"Unesite koliko imate godina\n";
    cin>> godine;
    try{
        text=provera(godine);
        cout<<text<<"\n\n";
    }
    catch(const char *poruka)
    {
        cout<<poruka;
    }
    cout<<"\n\n"<<godine<<"\n\n";
    return 0;
}
