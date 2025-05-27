#include <iostream>

using namespace std;

void GetArrayFromUser(int tablica[], int wartosc) {
    for (int i = 0; i < wartosc; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }
}

int FindMaxValue(int tablica[], int wartosc) {
    int max = tablica[0];
    for (int i = 1; i < wartosc; i++) {
        if (tablica[i] > max) {
            max = tablica[i];
        }
    }
    return max;
}

void DisplayResult(int max) {
    cout << "Najwieksza liczba: " << max << endl;
}

int main() {
    const int Wartosc = 5;
    int liczby[Wartosc];

    GetArrayFromUser(liczby, Wartosc);
    int max = FindMaxValue(liczby, Wartosc);
    DisplayResult(max);

    return 0;
}
