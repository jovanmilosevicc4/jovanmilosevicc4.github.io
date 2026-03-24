#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
class pravougaonik
{
private:
    int duzina,sirina;
public:
    void set(int x,int y)
    {
        this->duzina=x;
        this->sirina=y;
    }
    int get()
    {
        return this->duzina*this->sirina;
    }
};
int main()
{
    pravougaonik z;
    int a,b;
    cout << "Unesi duzinu :" << endl;
    cin >> a;
    cout <<"Unesi sirinu:"<<endl;
    cin>>b;
    z.set(a,b);
    cout<<endl<<"Povrsina je : "<<z.get()<<endl;
    return 0;
}
