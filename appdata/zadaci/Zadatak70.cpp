#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int a[5][5];
    srand(time(0));
    cout << "Matrica:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = rand() % 2;
            cout << a[i][j] << " ";}
        cout << endl;}
    int maxDaska = 0;
    int brojac[6] = {0};
    for (int i = 0; i < 5; i++) {
        int duzina = 0;
        for (int j = 0; j < 5; j++) {
            if (a[i][j] == 0) {
                duzina++;
            } else {
                if (duzina > 0) {
                    brojac[duzina]++;
                    if (duzina > maxDaska)
                        maxDaska = duzina;
                    duzina = 0;}}}
        if (duzina > 0) {
            brojac[duzina]++;
            if (duzina > maxDaska)
                maxDaska = duzina;}}
    // b)
    cout << "\nNajveca daska je duzine: " << maxDaska << endl;
    // c)
    cout << "\nDuzine i kolicine daski:\n";
    for (int i = 1; i <= 5; i++) {
        if (brojac[i] > 0) {
            cout << "Duzina " << i << " -> " << brojac[i] << " kom\n";
        }
    }
    return 0;
}
