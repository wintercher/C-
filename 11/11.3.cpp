#include <iostream>
#include <string>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void dane(const Samochod& s) {
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << s.marka << endl;
    cout << "Model: " << s.model << endl;
    cout << "Rok produkcji: " << s.rok_produkcji << endl;
}

int main() {

    Samochod przykladowysamochod = {"Toyota", "Corolla", 2018};

    dane(przykladowysamochod);

    return 0;
}
