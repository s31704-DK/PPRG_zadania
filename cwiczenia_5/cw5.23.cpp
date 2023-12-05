#include <iostream>
using namespace std;
//cw 5, lista 2, zad 3
int pole(int bokA, int bokB) {
    return bokA * bokB;
}

float pole(int przekatna) {
    return (przekatna * przekatna) * 3.14;
}

float pole(int podstawa, float wysokosc) {
    return (podstawa * wysokosc) / 2;
}

float poleFigury() {
    string figura;
    int zmiennaJeden = 0;
    int zmiennaDwa = 0;
    float zmiennaTrzy = 0;
    cout << "podaj figure (kwadrat, prostokat, kolo, trojkat)" << endl;
    cin >> figura;

    if (figura == "kwadrat") {
        cout << "podaj dlugosc bokow" << endl;
        cin >> zmiennaJeden;
        zmiennaDwa = zmiennaJeden;
        return pole(zmiennaJeden, zmiennaDwa);
    } else if (figura == "prostokat") {
        cout << "podaj dlugosc bokow" << endl;
        cin >> zmiennaJeden >> zmiennaDwa;
        return pole(zmiennaJeden, zmiennaDwa);
    } else if (figura == "kolo") {
        cout << "podaj dlugosc promienia" << endl;
        cin >> zmiennaJeden;
        return pole(zmiennaJeden);
    } else if (figura == "trojkat") {
        cout << "podaj dlugosc podstawy i wysokosc" << endl;
        cin >> zmiennaJeden >> zmiennaTrzy;
        return pole(zmiennaJeden, zmiennaTrzy);
    }
}

int main() {
    cout << poleFigury();
    return 0;
}
