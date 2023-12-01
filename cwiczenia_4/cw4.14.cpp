#include <iostream>
using namespace std;

//cw 4, lista 1, zad 4

int potega(int podstawa, int wykladnik, int iloczyn = 1) {
    if (wykladnik == 0) {
        return iloczyn;
    }
    else {
        return potega(podstawa, wykladnik - 1, iloczyn * podstawa);
    }
}

int main()
{
    int liczbaJeden;
    int liczbaDruga;

    cout << "podaj dwie liczby zatwierdzajac" << endl;
    cin >> liczbaJeden >> liczbaDruga;

    cout << potega(liczbaJeden, liczbaDruga) << endl;
   
    return 0;
}

