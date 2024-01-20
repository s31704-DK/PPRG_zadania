#include <iostream>
#include <time.h>
#include<cstdlib>
using namespace std;

//cw 7 zad 3
int najwieksza73(int arr[], int rozmiar) {
    int *ptr = arr;
    int max = *ptr;

    while (*ptr != '\0') {
        if (*ptr > max) {
            max = *ptr;
        }
        ptr++;
    }

    return max;
}

pair<int, int> najwiekszaIElement73(int arr[], int rozmiar) {
    int *ptr = arr;
    int max = *ptr;
    int element = 0;

    for (int i = 0; i < rozmiar; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
            element = i + 1;
        }
    }

    return {max, element};
}

//cw7 zad 4
void swapPointers74(int arr[], int rozmiar) {
    int *ptrStart = arr;
    int *ptrEnd = arr + rozmiar - 1;
    int temp;

    while (ptrStart < ptrEnd) {
        temp = *ptrStart;
        *ptrStart = *ptrEnd;
        *ptrEnd = temp;

        ptrStart++;
        ptrEnd--;
    }
}

int main() {
    //pobiera informacje o tablicy
    int rozmiarTablicy = 0;
    cout << "podaj rozmiar tablicy" << endl;
    cin >> rozmiarTablicy;

    int usrTablica[rozmiarTablicy];

    //losuje liczby i przypisuje je do tablicy
    srand (time(0));
    for (int i = 0; i < rozmiarTablicy; i++) {
        usrTablica[i] = rand() % 100;
    }

    //wyswietla tablice
    for (int i = 0; i < rozmiarTablicy; i++) {
        cout << usrTablica[i] << ", ";
    }

    //wyswietla wartosci dla zadania 3
    cout << endl << endl;
    cout << "max =" << najwieksza73(usrTablica, rozmiarTablicy) << endl;
    cout << "max = " << najwiekszaIElement73(usrTablica, rozmiarTablicy).first << " "
         << "element = " << najwiekszaIElement73(usrTablica, rozmiarTablicy).second << endl;

    //wyswietla wartosci dla zadania 4
    swapPointers74(usrTablica, rozmiarTablicy);

    cout << endl;
    for (int i = 0; i < rozmiarTablicy; i++) {
        cout << usrTablica[i] << ", ";
    }

    return 0;
}
