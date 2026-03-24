#include <iostream>
#include <stdio.h>
using namespace std;
class kula
{
public:
    virtual void ucitavanje()=0;
    virtual float zapremina()=0;
    virtual void ispis()=0;};
class okrugla:public kula{
private:
    float r,h;
public:
    void ucitavanje() override{
        cout<<"Unesite r\n";
        cin>>r;
        cout<<"Unesite h\n";
        cin>>h;}
    float zapremina() override{
        return r*r*3.14*h;}
    void ispis() override{
        cout<<"\nZapremina je "<<zapremina()<<"\n";}};
class cetvrtasta:public student{
private:
    int h,a,b;
public:
    void ucitavanje() override{
        cout<<"Unesite prvu dimenziju\n";
        cin>>a;
        cout<<"Unesite drugu dimenziju\n";
        cin>>b;
        cout<<"Unesite trecu dimenziju\n";
        cin>>h;}
    float zapremina() override{
        return a*b*h;}
    void ispis() override{
        cout<<"\nZapremina je "<<zapremina()<<"\n";}};
int main(){
    cout<<"\nIzaberite tip kule: (ili 1 ili 2)\n";
    int a=0;
    kula* A=NULL;
    do{
            cin>>a;
    if(a==1){
        A=new okrugla;}
    if(a==2){
        A=new cetvrtasta;}
        A->ucitavanje();
        A->ispis();
    }while(a>2||a<1);
    delete A;
    return 0;}
