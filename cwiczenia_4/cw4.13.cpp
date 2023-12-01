#include <iostream>
using namespace std;

//cw 4, lista 1, zad 3

bool czyPierwsza(int liczba) {
    for (int i = 1; i <= (liczba / 2); i++) {
        if (liczba % i == 0) {
            return false;
        }
        else {
            return true;
        }
    }
}

void ktorePierwsze(int poczatek, int koniec) {
    for (int i = poczatek; i <= koniec; i++) {
        if (czyPierwsza(i)) {
            cout << czyPierwsza << endl;
        }
    }
}

