#include <iostream>
int main (){
int tablica[5];

using namespace std;

// Deklaracja tablicy o rozmiarze 3x3
int macierz[3][3];

// Pobieranie wartosci od uzytkownika
cout << "Podaj 9 liczb calkowitych do macierzy 3x3:\n";
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
        cin >> macierz[i][j];
    }
}

// Wyswietlanie wartosci z tablicy
cout << "\nPodane liczby to:\n";
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << macierz[i][j] << " ";
    }
    cout << endl; // Przejscie do nowej linii po kazdym wierszu
}







return 0;
}