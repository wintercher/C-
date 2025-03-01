#include <iostream>
using namespace std;
int main(){
	
	int liczba;

	cout<<"Podaj liczbe: ";
	cin>>liczba;


	if (liczba % 2 == 1){
	
	cout<<"Liczba jest nieparzysta.";
	}
	else{
		cout<<"Liczba jest parzysta."<<endl;
	}
	
	if (!(liczba % 3)){
		cout<<"Liczba jest podzielna przez 3.";
	}
	else if (liczba % 3 != 0){
		cout<<"Liczba nie jest podzielna przez 3."<<endl;		
	}

	return 0;
	
}
