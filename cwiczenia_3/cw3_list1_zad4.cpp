#include <iostream>
using namespace std;


//Lista 1, zad 4 - obliczanie potegi podanej liczby o zadanym wykladniku;
int main() {

	int podstawa = 0;
	int wykladnik = 0;
	int potega = 1;

	cout << "Podaj podstawe, a nastepnie wykladnik." << endl;
	cin >> podstawa >> wykladnik;

	for (int w = 1; w <= wykladnik; w++) {
		potega *= podstawa;
	}

	cout << "Wynik potegowania, to: " << potega << endl;

	return 0;
}