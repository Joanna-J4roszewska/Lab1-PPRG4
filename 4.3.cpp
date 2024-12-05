#include <iostream>
using namespace std;

int main() {
	int tablica[10][10];

	for (int i = 0; i < 10; i++) {
		tablica[i][0] = i;
		tablica[i][1] = tablica[i][0] + tablica[i][0];
		tablica[i][2] = tablica[i][0] * tablica[i][0];
		
	}


	for (int i = 0; i < 10; i++) {
		cout << "Liczba: " << tablica[i][0] << " | Suma: " << tablica[i][1] << "| Kwadrat: "<<tablica[i][2]<<endl;

	}
	return 0;
}
