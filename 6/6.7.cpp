#include <iostream>
using namespace std;

int main() {
    const int wiersze = 2;
    const int kolumny = 3;

    int macierz[wiersze][kolumny];
    int transpozycja[wiersze][kolumny];

    cout << "Podaj 6 liczb calkowitych do macierzy 2x3:" << endl;

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
        }
    }

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            transpozycja[j][i] = macierz[i][j];
        }
    }

    cout << "Transponowana macierz:" << endl;
    for (int i = 0; i < kolumny; i++) {
        for (int j = 0; j < wiersze; j++) {
            cout << transpozycja[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
