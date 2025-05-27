#include <iostream>
using namespace std;

int main() {
    const int tablica = 5;
    int liczby[tablica];

    cout << "Wprowadz 5 liczb calkowitych: " << endl;
    for (int i = 0; i < tablica; i++) {
        cin >> liczby[i];
    }

    for (int i = 0; i < tablica; i++) {
        if (liczby[i] < 0) {
            liczby[i] = 0;
        }
    }

    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < tablica; i++) {
        cout << liczby[i];
        if (i < tablica - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
