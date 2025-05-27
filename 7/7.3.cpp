#include <iostream>
using namespace std;

int main() {
    const int tablica = 20;
    char ciag[tablica];
    char znak;
    int pozycje[tablica];
    int licznik = 0;

    cout << "Podaj ciag znakow: ";
    cin.getline(ciag, tablica);

    cout << "Podaj znak do zliczenia: ";
    cin >> znak;

    for (int i = 0; ciag[i] != '0'; i++) {
        if (ciag[i] == znak) {
            pozycje[licznik] = i + 1;
            licznik++;
        }
    }

    cout << "Liczba wystapien znaku '" << znak << "': " << licznik << endl;
    if (licznik > 0) {
        cout << "Pozycje wystapien: ";
        for (int i = 0; i < licznik; i++) {
            cout << pozycje[i];
            if (i != licznik - 1) cout << ", ";
        }
    }

    return 0;
}
