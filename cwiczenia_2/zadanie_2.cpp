#include <iostream>
using namespace std;

int main()
{
    int poczatekZakresu, koniecZakresu;

    cout << "podaj poczatek zakresu" << endl;
    cin >> poczatekZakresu;

    cout << "podaj koniec zakresu" << endl;
    cin >> koniecZakresu;

    bool czyZaprzyjazniona = false;

    for (int testPierwszy = poczatekZakresu; testPierwszy <= koniecZakresu; testPierwszy++) {

        int sumaDzielnikow1 = 1;

        // Petla zwracajaca sume dzielnikow kazdej kolejnej liczby z zadanego zakresu bez biezacej liczby
        for (int dzielnikPierwszy = 2; dzielnikPierwszy < testPierwszy; dzielnikPierwszy++) {
            if (testPierwszy % dzielnikPierwszy == 0) {
                sumaDzielnikow1 += dzielnikPierwszy;
            }

        }
        //druga petla z warunekiem sprawdzajaca czy w zadanym zakresie jest liczba, ktora jest rowna sumie dzielnikow liczby sprawdzanej;
        // przedzial to <testPierwszy; koniec Zakresu> celem unikniecia duplikatow
        for (int testDrugi = testPierwszy + 1; testDrugi <= koniecZakresu; testDrugi++) {
            if (sumaDzielnikow1 == testDrugi) {

                int sumaDzielnikow2 = 1;

                //petla zwracajaca sume dzielnikow kazdej liczby, ktora jest rowna sumie dzielnikow liczby sprawdzanej
                for (int dzielnikDrugi = 2; dzielnikDrugi < testDrugi; dzielnikDrugi++) {
                    if (testDrugi % dzielnikDrugi == 0) {
                        sumaDzielnikow2 += dzielnikDrugi;
                    }
                }

                //warunek sprawdzajacy, czy suma dzielnikow liczby, ktora jest rowna sumie dzielnikow liczby sprawdzanej, jest rowna liczbie sprawdzanej
                if (sumaDzielnikow2 == testPierwszy && testPierwszy != testDrugi) {
                    czyZaprzyjazniona = true;
                    cout << "Liczby zaprzyjaznione z tego zakresu, to: " << testPierwszy << " oraz "<< testDrugi << "." << endl;
                }
            }
        }
    }
    if (not czyZaprzyjazniona) {
        cout << "Nie ma zaprzyjaznionych liczb w tym zakresie." << endl;
    }
    return 0;
}