#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Podaj liczbe elementow w tablicy: ";
	cin >> n;

	vector<int> tablica(n); //dynamiczna tablica typu int o rozmiarze n
	cout << "Podaj " << n << " elementow w tablicy: ";
	for (int i = 0; i < n; i++) {
		cin >> tablica[i];
	}
	int najczestszyElement = tablica[0];//zalozenie ze pierwszy element bedzie najczestzsyz
	int maxWystapien = 0;//zalozenie  ze zaden element nie wystepuje 

	for (int i = 0; i < n; i++) { 
		int liczbaWystapien = 0;
		for (int j = 0; j < n; j++) {
			if (tablica[i] == tablica[j]) {
				liczbaWystapien++;
			}
		}
		if (liczbaWystapien > maxWystapien) {
			maxWystapien = liczbaWystapien;
			najczestszyElement = tablica[i];
		}
	cout << "Najczesiej wystepujacy element to " << najczestszyElement << ", ktory wystepuje " << maxWystapien << " razy.";
	return 0;
	}
}

