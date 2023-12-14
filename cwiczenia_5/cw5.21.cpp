#include <iostream>
using namespace std;

int nieposortowana[] = {3, 81, 54, 13, 18, 15}; /*szybkie sortowanie dziala poprawnie do arraya o rozmiarze 6;
                                                                                    przy wiekszych rozmiarach algortym bladzi*/

int indeksPodzialu(int indeksPierwszy, int indeksOstatni) {
    return (indeksPierwszy + (indeksOstatni - indeksPierwszy)) / 2;
}

void zamien(int tablicaZamien[], int indeks1, int indeks2) {
    int pomocnicza = tablicaZamien[indeks1];
    tablicaZamien[indeks1] = tablicaZamien[indeks2];
    tablicaZamien[indeks2] = pomocnicza;
}

int podzielTablice(int tablicaPodziel[], int poczatekPrzedzialu, int koniecPrzedzialu) {
    int srodekPrzedzialuIndeks = indeksPodzialu(poczatekPrzedzialu, koniecPrzedzialu);
    int srodekPrzedzialuWartosc = tablicaPodziel[srodekPrzedzialuIndeks];

    zamien(tablicaPodziel, srodekPrzedzialuIndeks, koniecPrzedzialu);

    int aktualnaPozycja = poczatekPrzedzialu;

    for (int i = poczatekPrzedzialu; i < koniecPrzedzialu; i++) {
        if (tablicaPodziel[i] < srodekPrzedzialuWartosc) {
            zamien(tablicaPodziel, i, aktualnaPozycja);
            aktualnaPozycja++;
        }
    }
    zamien(tablicaPodziel, aktualnaPozycja, koniecPrzedzialu);
    return aktualnaPozycja;
}

int sortowanieSzybkie(int tablicaSort[], int poczatek = 0, int koniec = 5) {
    if (poczatek < koniec) {
        int srodkiKolejnychPrzedzialow = podzielTablice(tablicaSort, poczatek, koniec);
        sortowanieSzybkie(tablicaSort, 0, srodkiKolejnychPrzedzialow-1);
        sortowanieSzybkie(tablicaSort, srodkiKolejnychPrzedzialow+1, koniec);
    }
    for (int i = poczatek; i <= koniec; i++) {
        cout << tablicaSort[i] << ", ";
    }
    cout << endl;

}


int main() {
    //cout << sizeof(nieposortowana)/sizeof(nieposortowana[0])<< endl;
    for (int i = 0; i <= sizeof(nieposortowana)/sizeof(nieposortowana[0])-1; i++) {
        cout << nieposortowana[i] << ", ";
    }

    sortowanieSzybkie(nieposortowana);

    return 0;
}
