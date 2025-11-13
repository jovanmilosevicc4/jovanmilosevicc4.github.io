#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
class cetvorougao
{
private:
    int duz,sir;
public:
    void dodeli(int x,int y)
 {
     duz=x;
     sir=y;
 }
 int povr()
 {
     return duz*sir;
 }
};

int main()
{
cetvorougao z;
 int a,b;
 printf("\nUnesite duzinu i sirinu cetvorougla\n");
 scanf("%d%d",&a,&b);
 z.dodeli(a,b);
 printf("\nPovrsina je %d\n",z.povr());
 return 0;
}
