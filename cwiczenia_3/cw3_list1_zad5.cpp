#include <iostream>
using namespace std;


//Lista 1, zad 5 - obliczanie sumy cyfr w liczbie;
int main() {

	int liczba = 0;
	cout << "Podaj liczbe calkowita, aby policzyc sume jej liczb." << endl;
	cin >> liczba;

	int suma_cyfr = 0;
	int liczba_pomocnicza = liczba;
	int cyfra_jednostki = 0;

	do {
		cyfra_jednostki = liczba_pomocnicza % 10;
		suma_cyfr += cyfra_jednostki;
		liczba_pomocnicza = liczba_pomocnicza / 10;
	} while (liczba_pomocnicza >= 10);

	suma_cyfr += liczba_pomocnicza;

	cout << suma_cyfr << endl;

	return 0;
}