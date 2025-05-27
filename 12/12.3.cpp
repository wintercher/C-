#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

bool czyPlikIstnieje(const string& nazwa) {
    ifstream plik(nazwa.c_str());
    return plik.good();
}

void zapiszPrzykladoweDane(const string& nazwa) {
    ofstream plik(nazwa.c_str());
    if (plik.is_open()) {
        plik << "Jan Kowalski 25" << endl;
        plik << "Anna Nowak 30" << endl;
        plik.close();
        cout << "Plik " << nazwa << " nie istnieje. Tworzenie pliku i zapis przykładowych danych..." << endl ;
    }
}

void dopiszNowaOsobe(const string& nazwa) {
    char decyzja;
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> decyzja;

    if (decyzja == 't' || decyzja == 'T') {
        Osoba o;
        cout << "Podaj imie: ";
        cin >> o.imie;
        cout << "Podaj nazwisko: ";
        cin >> o.nazwisko;
        cout << "Podaj wiek: ";
        cin >> o.wiek;

        ofstream plik(nazwa.c_str(), ios::app);
        if (plik.is_open()) {
            plik << o.imie << " " << o.nazwisko << " " << o.wiek << endl ;
            plik.close();
        }
    }
}

void wyswietlZawartoscPliku(const string& nazwa) {
    ifstream plik(nazwa.c_str());
    string imie, nazwisko;
    int wiek;

    cout << endl << "Dane w pliku po dopisaniu: " << endl ;
    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << endl;
    }
    plik.close();
}

int main() {
    string nazwaPliku = "dane.txt";

    if (!czyPlikIstnieje(nazwaPliku)) {
        zapiszPrzykladoweDane(nazwaPliku);
    }

    dopiszNowaOsobe(nazwaPliku);
    wyswietlZawartoscPliku(nazwaPliku);

    return 0;
}
