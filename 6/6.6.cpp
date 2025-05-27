#include <iostream>
using namespace std;

int main() {
    const int wiersze = 3;
    const int kolumny = 3;
    int macierz[wiersze][kolumny];
    int suma = 0;

    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << endl;

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
            suma += macierz[i][j];
        }
    }

    cout << "Suma elementow macierzy: " << suma << endl;

    return 0;
}
