#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define kazi cout
using namespace std;
class vektor
{
public:
    int x,y,z;
    vektor(){};
    vektor(int a,int b,int c)
    {
        this->x=a;
        this->y=b;
        this->z=c;
    }
    vektor operator+(vektor p)
    {
        vektor temp;
        temp.x=x+p.x;
        temp.y=y+p.y;
        temp.z=z+p.z;
        return temp;
    }
};
int main()
{
    vektor c;
    vektor a(3,4,1);
    vektor b(5,6,2);
    c=a+b;
    kazi<<"Vektor 'a' ima koordinate "<<a.x<<" "<<a.y<<" "<<a.z<<"\n";
    kazi<<"Vektor 'b' ima koordinate "<<b.x<<" "<<b.y<<" "<<b.z<<"\n";
    kazi<<"Kada se saberu dobija se "<<c.x<<" "<<c.y<<" "<<c.z<<"\n";
    return 0;
}
