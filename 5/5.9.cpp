#include <iostream>
using namespace std;

int main() {
    int liczby = 0;

    for (int s = 1; s <= 9; s++) {
        for (int d = 0; d <= 9; d++) {
            for (int j = 0; j <= 9; j++) {
                if (s != d && s != j && d != j) {
                    cout << s << d << j << endl;
                    liczby++;
                }
            }
        }
    }

    cout << "Liczb bez powtarzajacych sie cyfr: " << liczby << endl;

    return 0;
}
