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
    void ucitavanje(){
        cout<<"Unesite prvu ocenu\n";
        cin>>prvaocena;
        cout<<"Unesite drugu ocenu\n";
        cin>>drugaocena;}
    float prosek(){
        return (prvaocena+drugaocena)/2;}
    void ispis(){
        cout<<"\nProsek je "<<prosek()<<"\n";}};
class masterstudije:public student{
private:
    int prvaocena,drugaocena,trecaocena;
public:
    void ucitavanje(){
        cout<<"Unesite prvu ocenu\n";
        cin>>prvaocena;
        cout<<"Unesite drugu ocenu\n";
        cin>>drugaocena;
        cout<<"Unesite trecu ocenu\n";
        cin>>trecaocena;}
    float prosek(){
        return (prvaocena+drugaocena+trecaocena)/3;}
    void ispis(){
        cout<<"\nProsek je "<<prosek()<<"\n";}};
int main(){
    cout<<"\nIzaberite tip studenta: (ili 1 ili 2)\n";
    int a=0;
    do{
            cin>>a;
    if(a==1){
        osnovnestudije A;
        A.ucitavanje();
        A.ispis();}
    if(a==2){
        masterstudije A;
        A.ucitavanje();
        A.ispis();}
    }while(a>2||a<1);
    return 0;}
