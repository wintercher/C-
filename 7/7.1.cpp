#include <iostream>
using namespace std;

int main() {
    const int tablica = 21; 
    char ciag[tablica];

    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(ciag, tablica);

    cout << "Wprowadzony ciag znakow: " << ciag << endl;

    return 0;
}
