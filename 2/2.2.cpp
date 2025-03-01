#include <iostream>
using namespace std;
int main(){
	
	float masa;
	float wzrost;

	cout<<"Podaj mase ciala w kg: ";
	cin>>masa;
	cout<<"Podaj wzrost w metrach: ";
	cin>>wzrost;

	float bmi = masa / (wzrost * wzrost);

	cout<<"Twoje BMI wynosi: "<<bmi<<endl;

	if (bmi < 18.5){
		cout<<"Twoj stan wagowy: niedowaga";
	}
	else if (bmi >= 18.5 && bmi <= 24.9){
		cout<<"Twoj stan wagowy: w normie";
	}
	else if (bmi >= 25 && bmi <= 29.9){
		cout<<"Twoj stan wagowy: nadwaga";
	}
	
	else if (bmi > 30){
		cout<<"Twoj stan wagowy: otylosc";
	}

	return 0;
	
}
