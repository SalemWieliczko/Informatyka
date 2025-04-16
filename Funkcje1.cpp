#include <iostream>
using namespace std;

bool sprawdz(int a) {
	 

    
    bool wynik;
    
 	if(a % 2 == 0) {
	 wynik = true;
	}else{
	 wynik = false;
	}
	 
 	
   



    
  
	
	return wynik;	
	
	
}

int main() {
   int N; 
   bool sprawdzenie;
    
    cout << "Podaj liczbe caukowita: ";
    cin >> N;
     
    sprawdzenie = sprawdz(N);    
    
  

    
    

	cout << "Liczba " << N << " jest ";

      if(sprawdzenie == true) {
      	cout << "parzysta.";
   	}else{cout << "nieparzysta.";
	   }
    
    cout <<endl;
    
    
    
    
    return 0;
}