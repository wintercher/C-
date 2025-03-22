#include <iostream>
using namespace std;

int main(){

	double temperatura;
	char jednostka;
		
		cout<<"Podaj temperature w stopniach Celsjusza: ";  
    	cin>>temperatura;

    	cout<<"Podaj jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    	cin>>jednostka;

switch(jednostka){
	
	case 'K':
	case 'k':
		cout<<"Temperatura w K: "<< (temperatura + 273.15) <<endl;
		break;
	case 'F':
	case 'f':
		cout<<"Temperatura w F: "<< ((temperatura * 9/5) + 32)<<endl;
		break;
	default:
		cout<<"Blad."<<endl;
		break;
}
return 0;
}