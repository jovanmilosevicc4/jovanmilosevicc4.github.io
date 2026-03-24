#include <iostream>
#include <stdio.h>
using namespace std;
class radnik{
public:
    virtual void ucitavanje()=0;
    virtual float plata()=0;
    virtual void ispis()=0;};
class prodavac:public radnik{
private:
    float brs,cps;
public:
    void ucitavanje(){
        cout<<"Unesite broj sati\n";
        cin>>brs;
        cout<<"Unesite cenu po satu\n";
        cin>>cps;}
    float plata(){
        return brs*cps;}
    void ispis(){
        cout<<"\nPlata je "<<plata()<<"\n";}};
class menadzer:public radnik{
private:
    float brs,cps,prc;
public:
    void ucitavanje(){
        cout<<"Unesite broj sati\n";
        cin>>brs;
        cout<<"Unesite cenu po satu\n";
        cin>>cps;
        cout<<"Unesite procenat\n";
        cin>>prc;}
    float plata(){
        float priv=prc/100;
        return brs*cps+(brs*cps*priv);}
    void ispis(){
        cout<<"\nPlata je "<<plata()<<"\n";}};
int main(){
    cout<<"\nIzaberite tip radnika: (ili 1 ili 2)\n";
    int a=0;
    do{
            cin>>a;
    if(a==1){
        prodavac A;
        A.ucitavanje();
        A.ispis();}
    if(a==2){
        menadzer A;
        A.ucitavanje();
        A.ispis();}
    }while(a>2||a<1);
    return 0;}
