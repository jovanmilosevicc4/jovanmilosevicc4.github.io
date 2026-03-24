#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
class drvo{
private:
    int r,duz;
public:
    void dodeli(int x,int y){
        r=x;
        duz=y;}
    float povr(){
        return r*r*3.14;}
    float zap(){
        return 2*(r*r*3.14)*duz;
    }
};
int main()
{
  drvo niz[20];
  srand(time(0));
  float uk;
  for(int i=0;i<20;i++)
  {
      niz[i].dodeli(rand()%17+3,rand()%40+10);
      uk+=niz[i].zap();
  }
  printf("\nUkupna zapremina %.2f\n",uk);
  return 0;
}
