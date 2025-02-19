#include <iostream>
using namespace std;
int main(){
	
	int n = 0;
	
	cout<<"Podaj liczbe N:";
	cin>>n;

	cout<<"Liczby parzyste od 2 do "<< n <<endl;
	
	int p = 2;
	
while (p <= n) {	
	cout << p << endl;
	p +=2;
};

return 0;
	}