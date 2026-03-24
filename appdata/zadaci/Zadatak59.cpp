#include <iostream>
using namespace std;
class bankovniracun{
protected:
    float stanje=0;
public:
    void uplata(float iznos){
        stanje=iznos+stanje;
    }
    void isplata(float iznos){
        stanje=stanje-iznos;
    }
    void ispis(){
        cout<<"\nTrenutno stanje : "<<stanje<<"\n";
    }
    float ispis(int a){
        return stanje;}};
class devizniracun:public bankovniracun{
public:
    float kurs;
    void ispisstanjaueur(){
        cout<<"\nU evrima je : "<<stanje/kurs<<"\n";}};
int main(){
    bankovniracun A;
    devizniracun B;
    A.isplata(200.67);
    B.isplata(200.67);
    B.kurs=109;
    do{
        float priv;
        cin>>priv;
        A.uplata(priv);
        B.uplata(priv);
        A.ispis();
        B.ispisstanjaueur();
    }while(A.ispis(1)!=0);
    return 0;
}
