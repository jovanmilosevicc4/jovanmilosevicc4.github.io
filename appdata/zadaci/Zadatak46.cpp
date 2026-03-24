#include <iostream>
using namespace std;
class Voz {
private:
    int brojVagona;
    int brojSedistaPoVagonu;
public:
    Voz(int v = 0, int s = 0) {
        brojVagona = v;
        brojSedistaPoVagonu = s;
    }
    Voz operator*(const Voz& drugi) {
        Voz rezultat;
        rezultat.brojVagona = this->brojVagona + drugi.brojVagona;
        int ukupnoSedista =
            (this->brojVagona * this->brojSedistaPoVagonu) +
            (drugi.brojVagona * drugi.brojSedistaPoVagonu);
        if (rezultat.brojVagona != 0)
            rezultat.brojSedistaPoVagonu = ukupnoSedista / rezultat.brojVagona;
        else
            rezultat.brojSedistaPoVagonu = 0;
        return rezultat;}
    void ispisi() {
        cout << "Broj vagona: " << brojVagona << endl;
        cout << "Broj sedista po vagonu: " << brojSedistaPoVagonu << endl;}};
int main() {
    Voz v1(5, 50);
    Voz v2(3, 40);
    Voz v3 = v1 * v2;
    cout << "Rezultat mnozenja vozova:" << endl;
    v3.ispisi();
    return 0;
}
