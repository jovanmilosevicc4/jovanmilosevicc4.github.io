#include <iostream>
using namespace std;
class brojevi {
    protected: int a , b;
    public:
        void dodeli(){
        cout<<"\nUpisi prvi broj\n";
        cin>>a;
        cout<<"Upisi drugi broj\n";
        cin>>b;
        }
};
class saberi:public brojevi
{
public:
    void saber()
    {
        int suma=a+b;
        cout<<"\nKad se sabere dobije se "<<suma<<"\n";}};
class oduzimanje:public brojevi
{
public:
    void oduzmi(){
    int razlika=a-b;
    cout<<"\nKad se oduzmu dobije se "<<razlika<<"\n";
    }
};
int main(){
    saberi x;
    oduzimanje y;
    x.dodeli();
    x.saber();
    y.dodeli();
    y.oduzmi();
    return 0;
}
