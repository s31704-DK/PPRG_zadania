#include <iostream>
using namespace std;

//cw 6, lista 2, zad 1
struct Punkt {
    double x;
    double y;
};

Punkt jeden = {0,0};
Punkt dwa = {3, 4};

double potega2(double liczba) {
    return liczba*liczba;
}

double odleglosc(Punkt pkt1, Punkt pkt2) {
    return sqrt(
            potega2(abs(pkt1.x - pkt2.x))
            +potega2(abs(pkt1.y - pkt2.y))
            );
}

int main() {
    cout << odleglosc(jeden, dwa);

    return 0;
}
