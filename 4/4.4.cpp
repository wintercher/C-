#include <iostream>
using namespace std;

int main(){
	
	int N;
	int liczbyparzyste = 0;
	int i = 1;
	
	cout<<"Podaj liczbe calkowita dodatnia N: ";
	cin>>N;
	
	if (N < 1){
		cout<<"Blad. N musi byc liczba calkowita dodatnia."<<endl;
	}
	
	do{
		if (i % 2 == 0){
			liczbyparzyste++;
		}	
		i++;
	}
	while (i <= N);
	
	cout<<"Suma liczb parzystych od 1 do "<<N<<": "<<liczbyparzyste<<endl;
	
return 0;
}
