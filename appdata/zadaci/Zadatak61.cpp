#include <iostream>
using namespace std;
class radnik
{
public:
    virtual void ucitavanje()=0;
    virtual float plata()=0;
};
class programer:public radnik
{
private:
    int brs,cps;
public:
    void ucitavanje()
    {
        cout<<"Unesite broj sati\n";
        cin>>brs;
        cout<<"Unesite cena po satu\n";
        cin>>cps;
    }
    float plata()
    {
        return cps*brs;
    }
};
int main()
{
    programer A;
    A.ucitavanje();
    cout<<"\nPlata mu je "<<A.plata()<<" .\n";
    return 0;
}
