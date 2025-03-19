#include <iostream>

using namespace std;

int main () {
	
	char ciag[21];
	int znak = 'a';
	
	cout << "Podaj ciag znakow (maksymalnie 20):";
	cin.getline(ciag, 21);
	
	cout << "Podaj znak do zliczenia:";
	cin >> znak;
	
	
	
	

	int krowa = 0;

	for (int i = 0; i < 21; i++) {
  	  if (ciag[i] == znak) {krowa++;}
  	  
	}
	
	
	
	
	cout << "Liczba wystapien znaku '"<< znak <<"' :"<< krowa;
	

	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	}

