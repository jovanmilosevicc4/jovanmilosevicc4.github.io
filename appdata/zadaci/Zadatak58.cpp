#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class radnik{
protected:
    char ime[50];
    float plata;
public:
    void dodeli()
    {
        cout<<"\nUnesite ime radnika\n";
        scanf("%49[^\n]",ime);
        cout<<"Unesite koliku platu ima taj radnik\n";
        cin>>plata;
    }
    void ispis()
    {
        cout<<"Ime radnika : "<<ime<<"\nPlata : "<<plata<<"\n";
    }
};
class manager: public radnik
{
public:
    float bonus;
    float ukupnorac()
    {
        float uk=plata+bonus;
        return uk;
    }
    void ukupno()
    {
        cout<<"\nUkupna plata je "<<ukupnorac()<<"\n";
    }
};
int main()
{
    manager A;
    A.dodeli();
    A.ispis();
    A.bonus=500;
    A.ukupno();
    return 0;
}
