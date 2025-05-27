#include <iostream>
using namespace std;

int main() {
    const int tablica = 10;
    int liczby[tablica];
    int suma = 0;

    for (int i = 0; i < tablica; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    cout << "Liczby parzyste: ";
    for (int i = 0; i < tablica; i++) {
        if (liczby[i] % 2 == 0) {
            cout << liczby[i] << ", ";
            suma += liczby[i];
        }
    }

    cout << endl << "Suma liczb parzystych: " << suma << endl;

    return 0;
}
