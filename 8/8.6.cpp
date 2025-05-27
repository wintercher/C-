#include <iostream>

using namespace std;

int GetNumberFromUser() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    return liczba;
}

unsigned long long CalculateFactorial(int liczba) {
    unsigned long long silnia = 1;
    for (int i = 1; i <= liczba; i++) {
        silnia *= i;
    }
    return silnia;
}

void DisplayResult(int liczba, unsigned long long silnia) {
    cout << "Silnia liczby " << liczba << " wynosi: " << silnia << endl;
}

int main() {
    int liczba = GetNumberFromUser();

    if (liczba < 0) {
        cout << "Silnia nie mo¿e byæ na minusie." << endl;
    } else {
        unsigned long long wynik = CalculateFactorial(liczba);
        DisplayResult(liczba, wynik);
    }

    return 0;
}
