#include <iostream>
using namespace std;

//Lista 1, zad 1 - rysowanie prostokata o zadanych wymiarach;
int main()
{
    int wysokosc = 0, szerokosc = 0;
    cout << "Podaj dlugosc i szerokosc prostokata potwierdzajac kazda wartosc z osobna." << endl;
    cin >> wysokosc >> szerokosc;

    for (int w = 1; w <= wysokosc; w++) {
        if (w == 1 || w == wysokosc) {
            for (int s = 1; s <= szerokosc; s++) {
                cout << "*";
            }
        }
        else {
            for (int s = 1; s <= szerokosc; s++) {
                if (s == 1 || s == szerokosc) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}