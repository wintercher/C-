#include <iostream>
using namespace std;

int main(){
	
	int i = 2;
	int N;
	
	cout<<"Podaj liczbe N: "<<endl;
	cin>>N;
	
	if (N < 2) {
		cout<<"Blad. N musi byc liczba calkowita."<<endl;
	}
	
	cout<<"Liczby parzyste od 2 do "<<N<<": "<<endl;
	
	while (i <= N){
		cout<<i<<endl;
		i += 2;	
	}

			
return 0;
}