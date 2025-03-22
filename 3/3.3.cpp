#include <iostream>
using namespace std;

int main(){
	
	int godziny;
	char pojazd;
	
	cout<<"Podaj liczbe godzin parkowania: "<<endl;
	cin>>godziny;
	
	cout<<"Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): "<<endl;
	cin>>pojazd;
	
	switch (pojazd){
		
		case 'S':
		case 's':
			cout<<"Oplata za parkowanie: "<<(godziny * 5)<<endl;
			break;
			
		case 'M':
		case 'm':
			cout<<"Oplata za parkowanie: "<<(godziny * 3)<<endl;
			break;
			
		case 'A':
		case 'a':
			cout<<"Oplata za parkowanie: "<<(godziny * 10)<<endl;
		break;
		
		default:
			cout<<"Blad."<<endl;
		break;
	}
			
return 0;
}