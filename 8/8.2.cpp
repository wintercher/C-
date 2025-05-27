#include <iostream>

using namespace std;

int main() {
    int wybor;
    double liczba1, liczba2, wynik;

    do {
        cout << "Wybierz funkcje:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Roznica" << endl;
        cout << "3. Iloczyn" << endl;
        cout << "4. Iloraz" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor >= 1 && wybor <= 4) {
            cout << "Podaj pierwsza liczbe: ";
            cin >> liczba1;
            cout << "Podaj druga liczbe: ";
            cin >> liczba2;

            switch (wybor) {
                case 1:
                    wynik = liczba1 + liczba2;
                    cout << "Wynik: " << wynik << endl;
                    break;
                case 2:
                    wynik = liczba1 - liczba2;
                    cout << "Wynik: " << wynik << endl;
                    break;
                case 3:
                    wynik = liczba1 * liczba2;
                    cout << "Wynik: " << wynik << endl;
                    break;
                case 4:
                    if (liczba2 != 0) {
                        wynik = liczba1 / liczba2;
                        cout << "Wynik: " << wynik << endl;
                    } else {
                        cout << "Nie dzieli sie przez 0." << endl;
                    }
                    break;
            }
        }
        }
    	while (wybor != 0);

    cout << "Koniec programu." << endl;

    return 0;
}
