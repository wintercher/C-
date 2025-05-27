#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

void utworzNowyPlik() {
    string nazwa;
    cout << endl <<"Podaj nazwe nowego pliku: ";
    cin >> nazwa;

    ofstream plik(nazwa.c_str());
    if (plik) {
        cout << "Plik '" << nazwa << "' zostal utworzony." << endl;
    }
    plik.close();
}

void usunPlik() {
    string nazwa;
    cout << endl << "Podaj nazwe pliku do usuniecia: ";
    cin >> nazwa;

    ifstream test(nazwa.c_str());
    if (test.good()) {
        test.close();
        if (remove(nazwa.c_str()) == 0) {
            cout << "Plik '" << nazwa << "' zostal usuniety." << endl;
        } else {
            cout << "Blad usuwania pliku." << endl;
        }
    }
}

void zmienNazwePliku() {
    string staraNazwa, nowaNazwa;
    cout << endl << "Podaj nazwe pliku do zmiany: ";
    cin >> staraNazwa;

    ifstream test(staraNazwa.c_str());
    if (test.good()) {
        test.close();
        cout << "Podaj nowa nazwe pliku: ";
        cin >> nowaNazwa;

        if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0) {
            cout << "Plik zostal zmieniony na '" << nowaNazwa << "'." << endl;
        } else {
            cout << "Blad zmiany nazwy pliku." << endl ;
        }
    }
}

int main() {
    int wybor;

    do {
        cout << endl << "Wybierz operacje:" << endl;
        cout << "1 - Utworz nowy plik" << endl;
        cout << "2 - Usun plik" <<endl;
        cout << "3 - Zmien nazwe pliku" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1:
                utworzNowyPlik();
                break;
            case 2:
                usunPlik();
                break;
            case 3:
                zmienNazwePliku();
                break;
        }

    } while (wybor != 0);

    return 0;
}
