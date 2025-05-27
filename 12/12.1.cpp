#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main() {
    ifstream plik("dane.txt");

    string imie, nazwisko;
    int wiek;

    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie
             << ", Nazwisko: " << nazwisko
             << ", Wiek: " << wiek << endl;
    }

    plik.close(); 

    return 0;
}
