#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}

int CalculateSumRecursive(int n) {
    if (n <= 1)
        return n;
    return n + CalculateSumRecursive(n - 1);
}

void DisplayResult(int n, int suma) {
    cout << "Suma liczb od 1 do " << n << " wynosi: " << suma << endl;
}

int main() {
    int liczba = GetNumberFromUser();
    int wynik = CalculateSumRecursive(liczba);
    DisplayResult(liczba, wynik);
    return 0;
}
