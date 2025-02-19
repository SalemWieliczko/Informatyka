#include <iostream>
using namespace std;
 
int main() {
    int szerokosc, wysokosc;
 
    cout << "Podaj szerokosc podstawy trojkata: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc trojkata: ";
    cin >> wysokosc;
 
    for (int i = 0; i < wysokosc; i++) {
        int margin = i;
 
        for (int j = 0; j < margin; j++) {
            cout << " ";
        }
 
        for (int j = 0; j < szerokosc - 2 * margin; j++) {
            cout << "*";
        }
 
        cout << endl;
    }
 
 
 
 
 
 
 
 
    return 0;
}