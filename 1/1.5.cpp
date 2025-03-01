#include <iostream>
using namespace std;
int main(){
	
	int liczba1;
	int liczba2;

	
	cout<<"Podaj pierwsza liczbe: ";
	cin>>liczba1;
	cout<<"Podaj druga liczbe: ";
	cin>>liczba2;
	
	int suma = liczba1 + liczba2;
	int roznica = liczba1 - liczba2;
	int iloczyn = liczba1 * liczba2;
	float iloraz = liczba1 / liczba2;
	int resztadzielenie = liczba1 % liczba2;
	

	cout<<"Suma: "<<suma<<endl;
	cout<<"Roznica: "<<roznica<<endl;
	cout<<"Iloczyn: "<<iloczyn<<endl;
	cout<<"Iloraz: "<<iloraz<<endl;
	cout<<"Reszta z dzielenia: "<<resztadzielenie<<endl;
	
	
	return 0;
	
}
