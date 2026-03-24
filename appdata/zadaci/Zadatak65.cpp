#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class oblik{
public:
    virtual void ucitavanje()=0;
    virtual float povrsina()=0;
    virtual ~oblik(){}};
class pravougaonik:public oblik{
private:
    float sirina,duzina;
public:
    void ucitavanje() override{
        printf("Unesite sirinu:\n");
        scanf("%f",&sirina);
        printf("Unesite duzinu:\n");
        scanf("%f",&duzina);}
    float povrsina()override{
        return duzina*sirina;}};
class krug:public oblik{
private:
    float poluprecnik;
public:
    void ucitavanje() override{
        printf("Unesite poluprecnik:\n");
        scanf("%f",&poluprecnik);}
    float povrsina()override{
        return poluprecnik*poluprecnik*3.14;}};
int main()
{
    oblik* x=NULL;
    int a=0;
    printf("\nIzaberite krug(1) ili pravougaonik(2);\n");
    scanf("%i",&a);
    if(a==1)
        x=new krug;
    if(a==2)
        x=new pravougaonik;
    x->ucitavanje();
    printf("Povrsina je:%10.2f\n",x->povrsina());
    delete x;
    return 0;
}
