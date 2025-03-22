#include <iostream>
using namespace std;

int main(){
	
	int liczba;
	char liczbakolejna;
	
	do{
		cout<<"Podaj liczbe: ";
		cin>>liczba;
		
		cout<<"Wprowadziles liczbe: "<<liczba<<endl;
		
		cout<<"Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
		cin>>liczbakolejna;
	}
	
	while (liczbakolejna == 't' || liczbakolejna == 'T');
	
	cout<<"Dziekuje za wprowadzenie liczb!"<<endl;
	
return 0;
}