#include <iostream>
using namespace std;

//Cw 4, lista 1, zad 1

bool czyParzysta(int liczba = 0) {
	if (liczba % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

void main()
{
	int zmienna;
	cout << "podaje liczbe" << endl;
	cin >> zmienna;

	if (czyParzysta(zmienna)) {
		cout << "liczba jest parzysta" << endl;
	}
	else {
		cout << "liczba nie jest parzysta" << endl;
	}

}

