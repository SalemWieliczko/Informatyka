#include <iostream>
using namespace std;
int main(){
	
	int a = 0;
	int b = 0;
	
	cout<<"Podaj pierwsza cyfre:";
	cin>>a;

	char znak;
	
	cout<<"Podaj znak dzialania (+, -, *, /):";
	cin>>znak;
	
			
	cout<<"Podaj druga cyfre:";
	cin>>b;
	
	
	switch(znak) {
		case '+' :
			cout<<"Wynik:"<< a + b << endl;
			break;
		case '-' : 
			cout<<"Wynik:"<< a - b << endl;
			break;
		case '*' :
			cout<<"Wynik:"<< a * b << endl;
			break;
		case '/' :
			cout<<"Wynik:"<< a / b << endl;
			break;
		default:
			cout<<"Nieznany znak dzialania. Sprobuj ponownie."<< endl;
			break;
			
	}
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}