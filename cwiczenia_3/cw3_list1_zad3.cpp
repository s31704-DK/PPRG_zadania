#include <iostream>
using namespace std;


//Lista 1, zad 3 - obliczanie sredniej z wprowadzonych ocen;
int main() {

	bool check = true;
	float ocena = 0;
	float suma = 0;
	int ilosc = 0;

	while (check) {
		cout << "Podaj kolejna ocene. Podaj 0, aby zakonczyc i przejsc do liczenia sredniej" << endl;
		cin >> ocena;
		if (ocena != 0) {
			suma += ocena;
			ilosc++;
		}
		else {
			check = false;
		}

	}

	float srednia = suma / ilosc;

	cout << "Srednia ocen to: " << srednia << endl;

	return 0;
}