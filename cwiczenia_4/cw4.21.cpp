#include <iostream>
using namespace std;

//Cw4, lista 2, zad 1 - sprawdz czy zadana liczba jest szescianem innej liczby calkowitej

int czySzescian(int liczba) {
	for (int podstawa = 2; podstawa <= liczba; podstawa++) {
		int iloczyn = podstawa;
		for (int wykladnik = 2; wykladnik <= 3; wykladnik++) {
			iloczyn *= podstawa;
		}
		if (iloczyn == liczba) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int main()
{
	int zadanaLiczba;
	cout << "Podaj liczbe" << endl;
	cin >> zadanaLiczba;

	if (czySzescian(zadanaLiczba) == 1) {
		cout << "Podana liczba jest szescianem innej liczby" << endl;
	}
	else {
		cout << "Podana liczba nie jest szescianem innej liczby" << endl;
	}
}
