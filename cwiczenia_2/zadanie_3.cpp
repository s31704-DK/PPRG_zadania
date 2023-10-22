//Program liczacy n-ta liczbe Fibonacciego.

#include <iostream>
using namespace std;

int main() {

    int liczbaN;
    int ntaLiczba = 1;
    int poprzedniaLiczba = 0;
    int wynik = 0;

    cout << "Podaj, ktora liczbe z ciagu Fibonacciego obliczyc." << endl;
    cin >> liczbaN;

    // przypadek, gdy uzytkownik chce poznac zerowa liczbe ciagu
    if (liczbaN == 0) {
        cout << liczbaN << "owa liczba ciagu Fibonacciego to: " << poprzedniaLiczba << endl;
    }
    // przypadek, gdy uzytkownik chce poznac 1. liczbe ciagu
    else if (liczbaN == 1) {
        cout << liczbaN << "sza liczba ciagu Fibonacciego to: " << ntaLiczba << endl;
    }
    // przypadek, gdy uzytkownik chce poznac n>1 liczbe ciagu; i=2, poniewaz 0-owa i 1-sza liczba
    // zostaly zdefiniowane wyzej, zatem pomijam dwa pierwsze kroki
    else if (liczbaN > 1) {
        for (int i = 2; i <= liczbaN; i++) {
            wynik = poprzedniaLiczba + ntaLiczba;
            poprzedniaLiczba = ntaLiczba;
            ntaLiczba = wynik;
            }
        }
    // przypadek, gdy uzytkwnik poda liczbe ujemna
    else {
        cout << "Liczba reprezentujaca kolejny znakc ciagu nie moze byc ujemna." << endl;
    }
    // wynik jest zmienna globalna, zatem pozostaje zmieniona po zakonczeniu instrukcji warunkowych i petli;
    // jesli jest rozna od zera, to znaczy, ze przypadek liczbaN>1 zostal rozwazony i tylko wtedy jego wynik zostanie wydrukowany;
    // eliminuje to drukowanie kazdej kolejnej liczby ciagu, podajac jedynie n-ta.
    if (wynik != 0) {
        cout << liczbaN << "ta liczba ciagu Fibonacciego to: " << wynik << endl;
    }
    return 0;
}
