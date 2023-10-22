#include <iostream>
using namespace std;

int main()
{
    int poczatekZakresu, koniecZakresu;

    cout << "podaj poczatek zakresu" << endl;
    cin >> poczatekZakresu;

    cout << "podaj koniec zakresu" << endl;
    cin >> koniecZakresu;

    int liczbaPierwsza = 2;


    for (int test = poczatekZakresu; test <= koniecZakresu; test++) {

        bool czyPierwsza = true;

        for (int divisor = 2; divisor < test; divisor++) {
            if (test % divisor == 0) {
                czyPierwsza = false;
            }
        }
        if (czyPierwsza && test > 1) {
            cout << test << endl;
        }
    }
    return 0;
}