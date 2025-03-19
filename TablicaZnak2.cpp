#include <iostream>

using namespace std;

int main () {
	
	char ciag[21];
	
	cout << "Podaj ciag znakow (maksymalnie 20):";
	cin.getline(ciag, 21);
	
	
	
	
	cout << "Zmodyfikowany ciag znakow:";

	for (int i = 0; i < 21; i++) {
  	  if (ciag[i] == 'a') {ciag[i] = 'o';}
  	  
	}
	
	cout << ciag;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	}

