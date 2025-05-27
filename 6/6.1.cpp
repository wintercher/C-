#include <iostream>
using namespace std;

int main() {
    const int tablica = 5;
    int liczby[tablica];
    int suma = 0;

    for (int i = 0; i < tablica; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
        suma += liczby[i];
    }

    double srednia = static_cast<double>(suma) / tablica;
    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}
