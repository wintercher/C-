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
	cout<<"Suma: "<<suma<<endl;
	
	int stan;
	if ((liczba1 + liczba2) % 2 == 1){
	
	cout<<"Suma jest liczba nieparzysta.";
	}
	else{
		cout<<"Suma jest liczba parzysta.";
	}
	
	
	return 0;
	
}
