#include <iostream>
#include <string>
using namespace std;

/*definiowanie tablic:
 int arr[10]
 int arr1[5] = {1, 2, 3, 4, 5}
 int arr[] = {1, 2, 3}

 mozna tez wielowymiarowy array:
 int arr[2][3] = {{1,2,3},{1,2,3}} */

//cw 5, lista 1 zad 1
void pokazTyp(int calkowita) {
    cout << "Podano liczbe calkowita (int)" << endl;
}

void pokazTyp(string lancuch) {
    cout << "Podano lancuch znakow (string)" << endl;
}

//cw 5, lista 1 zad 2
int tablica1[] = {3, 5, 8,1, 4, 2};
float tablica2[] = {3, 3, 5, 5, 8, 8, 1, 1, 4, 4, 2, 2};
void mnozenieTablicy(int mnoznik) {
    for (int i = 0; i < 5; i++) {
        tablica1[i] *= mnoznik;
    }
}

//cw 5, lista 1 zad 3
void statTablicy(int tab[], int rozmiar) {
    int suma = 0;
    float srednia = 0.0;
    int minimum = tab[0];
    int maksimum = tab[0];

    //suma, min i maks
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
        if (minimum > tab[i]) {
            minimum = tab[i];
        }
        if (maksimum < tab[i]) {
            maksimum = tab[i];
        }
    }
    //srednia
    srednia = (float)suma / rozmiar;

    cout << "suma: " << suma << endl
        << "srednia: " << srednia << endl
        << "maksimum: " << maksimum << endl
        << "minimum: " << minimum << endl;
}

//cw 5, lista 1 zad 4
void przywitaj(bool zalogowany) {
    cout << "witaj nieznajomy" << endl;
}

void przywitaj(string imie){
    cout << "witaj " << imie << endl;
}

//cw 5, lista 1 zad 5
void filtrowanie(int filtr, string znak, int rozmiar) {
    if (znak == ">") {
        for (int i = 0; i < rozmiar; i++) {
            if (tablica1[i] > filtr)
                cout << tablica1[i] << endl;
        }
    }
    if (znak == "<") {
        for (int i = 0; i < rozmiar; i++) {
            if (tablica1[i] < filtr)
                cout << tablica1[i] << endl;
        }
    }
}

void filtrowanie(float filtr, string znak, int rozmiar) {
    if (znak == ">") {
        for (int i = 0; i < rozmiar; i++) {
            if (tablica2[i] > filtr)
                cout << tablica1[i] << endl;
        }
    }
    if (znak == "<") {
        for (int i = 0; i < rozmiar; i++) {
            if (tablica2[i] < filtr)
                cout << tablica2[i] << endl;
        }
    }
}

int main() {
    return 0;
}
