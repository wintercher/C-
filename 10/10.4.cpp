#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void lostablicy(int* tablica, int rozmiar) {
    srand(time(0));
    for (int i = 0; i < rozmiar; ++i) {
        *(tablica + i) = rand() % 51;
    }
}

bool sprawdzanie(int* liczba, int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        if (*(tablica + i) == *liczba) {
            return true;
        }
    }
    return false;
}

int main() {
    const int rozm = 10;
    int tablica[rozm];
    int liczba;
    int proby = 0;

    lostablicy(tablica, rozm);

    cout << "Tablica: ";
    for (int i = 0; i < rozm; ++i) {
        cout << tablica[i] << ", ";
    }
    cout << endl;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        ++proby;

        if (sprawdzanie(&liczba, tablica, rozm)) {
            cout << "Zgadles!" << endl;
            break;
        } else {
            cout << "Nie zgadles" << endl;
        }

    } while (true);

    cout << "Zgadles za " << proby << " razem.";

    return 0;
}
