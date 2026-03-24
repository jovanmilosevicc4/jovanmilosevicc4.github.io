#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
class radnik
{
private:
    int cps,brs;
public:
    void set(int x,int y)
    {
        this->cps=x;
        this->brs=y;
    }
    int get()
    {
        return this->cps*this->brs;
    }
};
int main()
{
    radnik z,k;
    int a,b;
    cout << "Unesi cena po satu za prvog :" << endl;
    cin >> a;
    cout <<"Unesi broj sati za prvog:"<<endl;
    cin>>b;
    z.set(a,b);
    cout << "Unesi cena po satu za drugog :" << endl;
    cin >> a;
    cout <<"Unesi broj sati za drugog:"<<endl;
    cin>>b;
    k.set(a,b);
    if(k.get()>z.get())cout<<endl<<"Drugi radnik ima vecu platu!"<<endl;
        if(k.get()<z.get())cout<<endl<<"Prvi radnik ima vecu platu!"<<endl;
            if(k.get()==z.get())cout<<endl<<"Ista im je plata"<<endl;
    return 0;
}
