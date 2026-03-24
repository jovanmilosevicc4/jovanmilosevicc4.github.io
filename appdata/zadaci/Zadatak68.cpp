#include <iostream>
#include <stdio.h>
using namespace std;
class student{
public:
    virtual void ucitavanje()=0;
    virtual float prosek()=0;
    virtual void ispis()=0;};
class osnovnestudije:public student{
private:
    float prvaocena,drugaocena;
public:
    void ucitavanje() override{
        cout<<"Unesite prvu ocenu\n";
        cin>>prvaocena;
        cout<<"Unesite drugu ocenu\n";
        cin>>drugaocena;}
    float prosek() override{
        return (prvaocena+drugaocena)/2;}
    void ispis() override{
        cout<<"\nProsek je "<<prosek()<<"\n";}};
class masterstudije:public student{
private:
    int prvaocena,drugaocena,trecaocena;
public:
    void ucitavanje() override{
        cout<<"Unesite prvu ocenu\n";
        cin>>prvaocena;
        cout<<"Unesite drugu ocenu\n";
        cin>>drugaocena;
        cout<<"Unesite trecu ocenu\n";
        cin>>trecaocena;}
    float prosek() override{
        return (prvaocena+drugaocena+trecaocena)/3;}
    void ispis() override{
        cout<<"\nProsek je "<<prosek()<<"\n";}};
int main(){
    cout<<"\nIzaberite tip studenta: (ili 1 ili 2)\n";
    int a=0;
    student* A=NULL;
    do{
            cin>>a;
    if(a==1){
        A=new osnovnestudije;}
    if(a==2){
        A=new masterstudije;}
        A->ucitavanje();
        A->ispis();
    }while(a>2||a<1);
    delete A;
    return 0;
}
