#include <iostream>
using namespace std;


//Lista 2, zad 1 - obliczanie sumy ciagu arytmetycznego o podanych parametrach;
int main() {

	int pierwszy = 0;
	int roznica = 0;
	int liczba = 0;
	int suma = 0;
	int kolejna = 0;

	cout << "Podaj elementy ciagu w zadanej kolejnosci:" << endl;
	cout << " -pierwszy wyraz" << endl;
	cout << " -roznica" << endl;
	cout << " -liczba wyrazow" << endl;
	cin >> pierwszy >> roznica >> liczba;

	suma += pierwszy;
	kolejna = pierwszy;

	cout << kolejna << "    " << suma << "    " << endl;

	for (int n = 2; n <= liczba; n++) {
		kolejna += roznica;
		suma += kolejna;
	}

	cout << "Suma ciagu, to: " << suma << endl;

	return 0;
}