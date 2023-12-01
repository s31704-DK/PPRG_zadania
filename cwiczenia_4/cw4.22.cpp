#include <iostream>
using namespace std;

//cw4, lista 2, zad 2 - iteracyjna i rekurencyjna wersja funkcji:
//i) dwumian Newtona

int silniaIteracyjnie(int podstawaSilniI) {
    int iloczynSilniI = 1;
    for (int kolejnaLiczba = podstawaSilniI; kolejnaLiczba >= 2; kolejnaLiczba--) {
        iloczynSilniI *= kolejnaLiczba;
    }
    return iloczynSilniI;
}

int silniaRekurencyjnie(int podstawaSilniR, int mnoznik = 1,  int iloczynSilniR = 1) {
    if (mnoznik == podstawaSilniR) {
        return iloczynSilniR * mnoznik;
    }
    else {
        return silniaRekurencyjnie(podstawaSilniR, mnoznik + 1, iloczynSilniR * mnoznik);
    }
}

int dwumianNewtonaIteracyjnie(int argumentAI, int argumentBI) {
    return silniaIteracyjnie(argumentAI) /
           silniaIteracyjnie(argumentBI) *
           silniaIteracyjnie(abs(argumentAI - argumentBI));
}

int dwumianNewtonaRekurencyjnie(int argumentAR, int argumentBR) {
    return silniaRekurencyjnie(argumentAR) /
           silniaIteracyjnie(argumentBR) *
           silniaIteracyjnie(abs(argumentAR - argumentBR));
}

/*---------------------------------------------------------------------*/
//ii)najwiekszy wspolny dzielnik (algorytm Euklidesa):
int NWDIteracyjnie(int liczbaAI, int liczbaBI) {
    bool czyNWDI = false;
    int tempAI = liczbaAI;
    int tempBI = liczbaBI;
    int roznica;
    while (!czyNWDI) {
        roznica = abs(tempAI -  tempBI);
        if (roznica == 0) {
            czyNWDI = true;
            return tempAI;
        } else {
            tempBI = min(tempAI, tempBI);
            tempAI = roznica;
        }
    }
}

int NWDRekurencyjnie(int liczbaAR, int liczbaBR, int roznica = 0) {
    roznica = abs(liczbaAR - liczbaBR);
    if (roznica == 0) {
        return liczbaBR;
    } else {
        return NWDRekurencyjnie(min(liczbaAR, liczbaBR), roznica);
    }
}


/*---------------------------------------------------------------------*/
int main() {
    int liczbaJeden;
    int liczbaDwa;
    const int N = 10;
    long long value1 = 0, value2 = 0;

    cout << "podaj dwie liczby, kazda zatwierdzjac" << endl;
    cin >> liczbaJeden >> liczbaDwa;

    //najpierw drukuje wynik
    cout << "Dwumian Newtona:" << endl;
    cout << dwumianNewtonaIteracyjnie(liczbaJeden, liczbaDwa) << endl;
    cout << dwumianNewtonaRekurencyjnie(liczbaJeden, liczbaDwa) << endl;

    //potem drukuje czas
    cout << "Czasy dzialania" << endl;
    for (int i = 1; i < N; i++) {
        auto begin = chrono::high_resolution_clock::now();
        value1 = dwumianNewtonaIteracyjnie(liczbaJeden, liczbaDwa);
        auto end = chrono::high_resolution_clock::now();
        auto elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << "DN Iteracyjnie (" << i << ") = ";
        cout << " time: " << elapsed.count() << " s" << endl;

        begin = chrono::high_resolution_clock::now();
        value2 = dwumianNewtonaRekurencyjnie(liczbaJeden, liczbaDwa);
        end = chrono::high_resolution_clock::now();
        elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << "DN Rekurecyjnie (" << i << ") = ";
        cout << " time: " << elapsed.count() << " s" << endl;
    }
    cout << endl << "*--------------------------*" << endl;
    //wynik
    cout << "najwiekszy wspolny dzielnik:" << endl;
    cout << NWDIteracyjnie(liczbaJeden, liczbaDwa) << endl;
    cout << NWDRekurencyjnie(liczbaJeden, liczbaDwa) << endl;

    //czas
    cout << "czasy dzialania:" << endl;
    for (int i = 1; i < N; i++) {
        auto begin = chrono::high_resolution_clock::now();
        value1 = NWDIteracyjnie(liczbaJeden, liczbaDwa);
        auto end = chrono::high_resolution_clock::now();
        auto elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << "NWD Iteracyjnie(" << i << ") = ";
        cout << " time: " << elapsed.count() << " s" << endl;

        begin = chrono::high_resolution_clock::now();
        value2 = NWDRekurencyjnie(liczbaJeden, liczbaDwa);
        end = chrono::high_resolution_clock::now();
        elapsed = chrono::duration_cast<chrono::duration<float>>(end - begin);

        cout << "NWD Rekurencyjnie(" << i << ") = ";
        cout << " time: " << elapsed.count() << " s" << endl;
    }
    return 0;
}