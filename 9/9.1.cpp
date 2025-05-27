#include <iostream>
#include <cmath>
using namespace std;

double objetosc(double a) {
    return pow(a, 3);
}

double objetosc(double a, double b, double h) {
    return a * b * h;
}

double objetosc(double r, double h) {
    const double pi = 3.1415;
    return pi * pow(r, 2) * h;
}

void wynik(double obj) {
    cout << "Objetosc wynosi: " << obj << endl;
}

int main() {
    int choice;
    cout << "Wybierz bryle do obliczenia objetosci:" << endl;
    cout << "1 - Szescian (V = a^3)" << endl;
    cout << "2 - Prostopadloscian (V = a * b * h)"<< endl;
    cout << "3 - Walec (V = pi * r^2 * h)" << endl;
    cout << "Wybierz numer bryly: " << endl;
    cin >> choice;

    if (choice == 1) {
        double a;
        cout << "Podaj dlugosc boku: ";
        cin >> a;
        wynik(objetosc(a));
    } else if (choice == 2) {
        double a, b, h;
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;
        wynik(objetosc(a, b, h));
    } else if (choice == 3) {
        double r, h;
        cout << "Podaj promien podstawy: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;
        wynik(objetosc(r, h));
    }

    return 0;
}
