#include <iostream>
using namespace std;

int ObliczSume(int* tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += *(tablica + i);
    }
    return suma;
}

int main() {
    const int rozm = 4;
    int tablica[rozm] = {5, 15, 10, 20};

    int suma = ObliczSume(tablica, rozm);
    cout << "Suma elementow tablicy: " << suma << endl;

    for (int i = 0; i < rozm; ++i) {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> *(tablica + i);
    }

    cout << "Nowa tablica:" << endl;
    for (int i = 0; i < rozm; ++i) {
        cout << *(tablica + i) << " ";
    }
    cout << endl;

    suma = ObliczSume(tablica, rozm);
    cout << "Nowa suma elementow tablicy: " << suma << endl;

    return 0;
}
