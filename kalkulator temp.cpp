#include <iostream>
using namespace std;
int main(){
	
	int a = 0;
	
	cout<<"Podaj temperature w stopniach Celsjusza:";
	cin>>a;
	
	char jednostka;
	
	cout<<"Podaj jednostke docelowa (K - Kelvin, F - Fahrenheit):";
	cin>>jednostka;
	
		switch(jednostka) {
			case 'K' :
				cout<<"Temperatura w stopniach Kelvina:"<< a + 273.15 <<endl;
				break;
			case 'F' :
				cout<<"Temperatura w stopniach Fahrenheita:"<< (a * 9/5) + 32 <<endl;
				break;
			default:
				cout<<"Nieprawidłowo podana jednostka.";
				break;
		}
	
	
	
	
	
	
	
	
	
	return 0;
	
}