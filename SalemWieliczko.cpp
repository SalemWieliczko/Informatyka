#include <iostream>
using namespace std;
int main(){
	
	int wynik = 0;
	cout<<"Podaj swoj wiek:";
	cin>>wynik;
	
	cout<<"Twoja kategoria wiekowa:";
	
	if ((wynik > 0) || (wynik < 12)); {
		cout << "Dziecko";
	}
	if ((wynik > 13) || (wynik < 17)); {
		cout << "Nastolatek";
	}
	if ((wynik > 18) || (wynik < 64)); {
		cout << "Dorosly";
	}
	if ((wynik > 65) || (wynik < 120)); {
		cout << "Senior";
	}
	if ((wynik > 120);
	cout << "Wprowadziles dane niepoprawnie. Twoj wiek powinien byc w zakresie od 0 do 120"
	
	
	return 0;
	
}