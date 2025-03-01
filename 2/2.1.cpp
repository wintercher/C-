#include <iostream>
using namespace std;
int main(){
	
	int liczba;

	cout<<"Podaj wynik egzaminu (liczba puntkow): ";
	cin>>liczba;

	if (liczba >= 0 && liczba <= 49){
		cout<<"Ocena: niedostateczna";
}
	else if (liczba >= 50 && liczba <= 69){
		cout<<"Ocena: dostateczna";
	}
	else if (liczba >= 70 && liczba <= 84){
		cout<<"Ocena: dobra";
}
	else if (liczba >= 85 && liczba <= 99){
		cout<<"Ocena: bardzo dobra";
}
	else if (liczba == 100){
		cout<<"Ocena: celujaca";
}

	else if (liczba > 0 || liczba < 100){
		cout<<"Punkty wprowadzone spoza zakresu.";
}
	return 0;
	
}
