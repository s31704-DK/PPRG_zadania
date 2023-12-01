#include <iostream>
using namespace std;

void sumaCiagow(float pierwszyWyraz, float roznica, int liczbaElementow) {
    //ciag arytmetyczny
    float suma = 0;
    float kolejnyWyraz = pierwszyWyraz;
    for (int i = 1; i <= liczbaElementow; i++) {
        suma +=  kolejnyWyraz;
        kolejnyWyraz += roznica;
    }
    cout << "Suma ciagu arytmetycznego: " << suma << endl;
    //ciag geometryczny
    suma = 0;
    kolejnyWyraz = pierwszyWyraz;
    for (int i = 1; i <= liczbaElementow; i++) {
        suma += kolejnyWyraz;
        kolejnyWyraz *= roznica;
    }
    cout << "Suma ciagu geometrycznego: " << suma << endl;
}

int main() {

    float liczbaJeden, liczbaDwa;
    int liczbaTrzy;

    cout << "Podaj trzy liczby w zadanej kolejnosci:" << endl
        << " -pierwszy wyraz ciagu," << endl
        << " -roznice/iloraz ciagu," << endl
        << " -liczbe elementow ciagu" << endl
        << "kazda zatwierdzajac." << endl;
    cin >> liczbaJeden >> liczbaDwa >> liczbaTrzy;

    sumaCiagow(liczbaJeden, liczbaDwa, liczbaTrzy);

    return 0;
}
