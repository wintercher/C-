#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    int* ptrA = &a;
    int* ptrB = &b;

    cout << "Przed modyfikacja:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    *ptrA = 15;
    *ptrB = 20;

    cout << "\nPo modyfikacji:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
