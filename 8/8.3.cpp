#include <iostream>
#include <string>

using namespace std;

string GetTextFromUser() {
    string text;
    cout << "Podaj ciag znakow: ";
    getline(cin, text);
    return text;
}

string ReverseString(string text) {
    int start = 0;
    int end = text.length() - 1;
    while (start < end) {
        swap(text[start], text[end]);
        start++;
        end--;
    }
    return text;
}

void DisplayResult(string reversedText) {
    cout << "Odwrocony ciag: " << reversedText << endl;
}

int main() {
    string tekst = GetTextFromUser();
    string odwrocony = ReverseString(tekst);
    DisplayResult(odwrocony);

    return 0;
}
