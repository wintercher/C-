#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int tablica = 20;
    char ciag[tablica];

    cout << "Podaj ciag znakow: ";
    cin.getline(ciag, tablica);

    int dlugosc = strlen(ciag);

    char odwrocony[tablica];

    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = ciag[dlugosc - 1 - i];
    }

    cout << "Odwrocony ciag: " << odwrocony << endl;

    return 0;
}
