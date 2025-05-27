#include <iostream>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

void dane(const Osoba osoby[], int liczba_osob) {
    cout << "Dane zapisane w tablicy struktur: " << endl;
    for (int i = 0; i < liczba_osob; ++i) {
        cout << i + 1 << ". Imie: " << osoby[i].imie
             << ", Nazwisko: " << osoby[i].nazwisko
             << ", Wiek: " << osoby[i].wiek << endl;
    }
}

int main() {
    const int tablica = 3;

    Osoba osoby[tablica] = {
        {"Jan", "Kowalski", 25},
        {"Anna", "Nowak", 30},
        {"Piotr", "Wisniewski", 40}
    };

    dane(osoby, tablica);

    return 0;
}
