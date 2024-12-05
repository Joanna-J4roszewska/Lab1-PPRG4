#include <iostream>
using namespace std;

int main() {
	int n;
	int najwiekszy;
	int liczba;
	cout << "Podaj liczbe elementow w tablicy: ";
	cin >> n;
	if (n <= 0) {
		cout << "Liczba elementow musi byc wieksza od zera.";
		return 1;
	}
	cout << "Podaj element 1: ";
	cin >> liczba;
	najwiekszy = liczba;
	for (int i = 2; i <= n; ++i) {
		cout << "Podaj nastepny element: ";
		cin >> liczba;
		if (liczba > najwiekszy) {
			najwiekszy = liczba;
		}
	}
	cout << "Najwiekszy element tablicy to: " << najwiekszy << ".";
	return 0;
}
