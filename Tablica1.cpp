#include <iostream>

using namespace std;

int main() {
	
	int tablica [5];
	int suma=0;
	float srednia;
	
	
	
	for(int i=0; i<5;i++){
		cout <<"Podaj liczbe nr " <<i+1<<": ";
		cin >> tablica [i];
		suma += tablica [i];
	}
	srednia = suma / 5.0;
	
	
	

	cout <<"Srednia liczb wynosi: " <<srednia<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	}