#include <iostream>
#include <stdio.h>
#define foid void
using namespace std;
class radnik{
public:
    virtual foid ucitavanje()=0;
    virtual float plata()=0;
    virtual foid ispis()=0;};
class prodavac:public radnik{
private:
    float brs,cps;
public:
    foid ucitavanje() override{
        cout<<"Unesite broj sati\n";
        cin>>brs;
        cout<<"Unesite cenu po satu\n";
        cin>>cps;}
    float plata() override{
        return brs*cps;}
    void ispis() override{
        cout<<"\nPlata je "<<plata()<<"\n";}};
class menadzer:public radnik{
private:
    float brs,cps,prc;
public:
    void ucitavanje()override{
        cout<<"Unesite broj sati\n";
        cin>>brs;
        cout<<"Unesite cenu po satu\n";
        cin>>cps;
        cout<<"Unesite procenat\n";
        cin>>prc;}
    float plata() override{
        float priv=prc/100;
        return brs*cps+(brs*cps*priv);}
    void ispis() override{
        cout<<"\nPlata je "<<plata()<<"\n";}};
int main(){
    cout<<"\nIzaberite tip radnika: (ili 1 ili 2)\n";
    int a=0;
    radnik* A=NULL;
    do{
            cin>>a;
    if(a==1){
        A=new prodavac;}
    if(a==2){
        A=new menadzer;}
    A->ucitavanje();
        A->ispis();
        delete A;
    }while(a>2||a<1);
    return 0;
}
