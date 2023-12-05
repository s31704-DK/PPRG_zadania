#include <iostream>
using namespace std;

//cw 5, lista 2, zad 2
//zgodnie z poleceniem, zdefiniowane zostaly przykladowe macierze globalne
int arrA[2][2] = {
        {1,-5},
        {1,0}
};

int arrB[2][3] = {
        {1,0,3},
        {-1,1,1}
};


void mnozenieArr() {
    //mnozenie dwoch macierze i wpisywanie wyniku do macierzy wynikowej
    int wynikArr[2][3];
    for (int wA = 0; wA < 2; wA++) {
        for (int kB = 0; kB < 3; kB++) {
            int tempSum = 0;
            for (int kA = 0; kA < 2; kA++) {
                tempSum += arrA[wA][kA] * arrB[kA][kB];
            }
            wynikArr[wA][kB] = tempSum;
        }
    }
    //wyswietlanie dzialania
    for (int i = 0; i < 2; i++) {
        cout << "[";
        for (int j = 0; j < 2; j++) {
            cout << arrA[i][j] << " ";
        }
        cout << "]" << endl;
    }

    cout << "   *   " << endl;

    for (int i = 0; i < 2; i++) {
        cout << "[";
        for (int j = 0; j < 3; j++) {
            cout << arrB[i][j] << " ";
        }
        cout << "]" << endl;
    }

    cout << "   ||   " << endl;

    //wyswietlanie macierzy wynikowej
    for (int i = 0; i < 2; i++) {
        cout << "[";
        for (int j = 0; j < 3; j++) {
            cout << wynikArr[i][j] << " ";
        }
        cout  << "]" << endl;
    }
}


int main() {
    mnozenieArr();
    return 0;
}

/* ze wzgledu na bledy wskazywane przez kompilator odnosnie inicjalizowania i zwracania
 macierzy jako zmiennej funkcji, a takze pozyskiwaniu rozmiaru arraya wielowymiarowego,
 program zostal napisany dla fixed arrayow */