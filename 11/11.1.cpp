#include <iostream>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

void dane(const Osoba& osoba) {
    cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << endl;
}

int main() {

    Osoba osoba1 = {"Jan", "Kowalski", 25};

    cout << "Dane przed modyfikacja: " << endl;
    dane(osoba1);

    osoba1.wiek = 30;

    cout << "\nDane po modyfikacji: " << endl;
    dane(osoba1);

    return 0;
}
