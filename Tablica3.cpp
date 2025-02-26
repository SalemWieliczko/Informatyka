#include <iostream>

using namespace std;

int main() {
	
	int tablica [5];

	
	
	
	for(int i = 0; i < 5; i++){
		cout <<"Podaj liczbe nr " <<i+1<<": ";
		cin >> tablica [i];
	}

	int najmniejsza = tablica[0];
	
	for (int i = 0; i < 5; i++) {
	if (tablica[i] < najmniejsza) {
		najmniejsza = tablica[i];
	}
}

	
		cout <<"Najmniejsza wartosc w tablicy to: " << najmniejsza <<endl;
	

	
	


	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	}