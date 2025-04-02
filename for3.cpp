#include <iostream>
using namespace std;
 
int main() {
    int N;
 
    cout << "Podaj liczbe caukowita N: ";
    cin >> N;

 
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {  
            cout << "Liczby nieparzyste od" << i << "do " << N << ": ";
        }
    }
 
    cout << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
