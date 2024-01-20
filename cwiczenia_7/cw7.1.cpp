#include <iostream>
using namespace std;


//cw 7 zad 1
void swapPointers71(int *pointerJeden, int *pointerDwa) {
    int temp = *pointerJeden;
    *pointerJeden = *pointerDwa;
    *pointerDwa = temp;
}

int main() {
    //wywolanie cw 7 zad 1
    int pierwszaLiczba, drugaLiczba;
    cout << "Podaj dwie liczby calkowite, kazda zatwierdzajac" << endl;
    cin >> pierwszaLiczba >> drugaLiczba;

    int *ptrJeden = &pierwszaLiczba;
    int *ptrDwa = &drugaLiczba;

    cout << "przed zamiana: " << *ptrJeden << "  " << *ptrDwa << endl;
    swapPointers71(ptrJeden, ptrDwa);
    cout << "po zamianie: " << *ptrJeden << "  " << *ptrDwa << endl;

    return 0;
}
