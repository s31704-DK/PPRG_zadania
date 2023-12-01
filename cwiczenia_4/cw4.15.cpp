#include <iostream>
using namespace std;

//cw 4, lista 1, zad 5


//Podejscie pierwsze, mozna by tez bylo rozwaiazac za pomoca if-a
int sumaCyfr(int liczba) {
    int sum = 0;
    while (liczba > 10) {
            sum = sum + (liczba % 10);
            liczba = liczba / 10;
        }
        sum = sum + liczba;

        return sum;
}

int suma(int n) {

    if (sumaCyfr(n) < 10) {
        return sumaCyfr(n);
    }
    else {
        return suma(sumaCyfr(n));
    }
}


void main()
{
    int zmiennaJeden;
    cout << "podaj liczbe" << endl;
    cin >> zmiennaJeden;

    cout << suma(zmiennaJeden) << endl;
}