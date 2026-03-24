#include <iostream>
using namespace std;

int main() {
    int L;
    cout << "Unesi duzinu zice L: ";
    cin >> L;
    int N;
    cout << "Unesi broj razlicitih komada (N <= 3): ";
    cin >> N;
    int duzina[3], kolicina[3];
    for (int i = 0; i < N; i++) {
        cout << "Unesi duzinu i kolicinu: ";
        cin >> duzina[i] >> kolicina[i];}
    int komadi[1000];
    int ukupno = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < kolicina[i]; j++) {
            komadi[ukupno++] = duzina[i];}}
    for (int i = 0; i < ukupno - 1; i++) {
        for (int j = i + 1; j < ukupno; j++) {
            if (komadi[i] < komadi[j]) {
                int temp = komadi[i];
                komadi[i] = komadi[j];
                komadi[j] = temp;}}}
    int zice[1000] = {0};
    int brojZica = 0;
    for (int i = 0; i < ukupno; i++) {
        bool smesten = false;
        for (int j = 0; j < brojZica; j++) {
            if (zice[j] + komadi[i] <= L) {
                zice[j] += komadi[i];
                smesten = true;
                break;}}
        if (!smesten) {
            zice[brojZica] = komadi[i];
            brojZica++;
        }}
    cout << "Potrebno je " << brojZica << " zica." << endl;
    return 0;
}
