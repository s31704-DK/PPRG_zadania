#include <iostream>
using namespace std;


//Lista 1, zad 2 - rysowanie trojkata rownobocznego o zadanej dlugosci boku;
int main() {

    int wysokosc = 0;
    int licznik = 0;

    cout << "Podaj dlugosc boku" << endl;
    cin >> wysokosc;

    for (int w = 0; w < wysokosc; w++) {
        licznik = (wysokosc - w) / 2;

        for (int l = 0; l < licznik; l++) {
            cout << " ";
        }
        for (int s = 0; s < w; s++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}