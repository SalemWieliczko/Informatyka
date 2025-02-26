#include <iostream>

using namespace std;

int main() {
	
	int tablica [5];

	
	
	
	for(int i = 0; i < 5; i++){
		cout <<"Podaj liczbe nr " <<i+1<<": ";
		cin >> tablica [i];
	}

	
	for (int a = 0; a < 5; a++) {
	if (tablica[a] < 0) {
		tablica[a] = 0;
	}
}

	
		cout <<"Liczby ujemne zamienione na 0: ";
	for(int i = 0; i < 5; i++) {
    cout << tablica[i] << " ";
}
	
	


	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	}