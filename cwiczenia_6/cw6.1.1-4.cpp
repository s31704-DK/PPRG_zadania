#include <iostream>
using namespace std;

/*struktura przechowuje informacje o rekordach/polach
  tworzy sie jako struct nazwa { type nazwa_pola; };

  struct Osoba {
   string imie;
   string nazwisko;
   int wiek;
 };
 korzystanie:
 Osoba uzytkownik = {"Jan", "Kowalski", 28}
 cout << uzytkownik.imie;*/

//cw 6, lista 1, zad 1
struct Prostokat {
    double dlugosc;
    double szerokosc;
};

double poleProstokata(Prostokat pr) {
    return pr.dlugosc * pr.szerokosc;
}

//cw 6, lista 1, zad 2
struct Data {
    int dzien;
    int miesiac;
    int rok;
};

bool porownajDaty (Data dataPierwsza, Data dataDruga) {
    int sumaPierwsza = dataPierwsza.rok*1000 + dataPierwsza.miesiac*50 + dataPierwsza.dzien;
    int sumaDruga = dataDruga.rok*1000 + dataDruga.miesiac*50 + dataDruga.dzien;
    if (sumaPierwsza < sumaDruga) {
        return true;
    } else {
        return false;
    }
}

//cw 6, lista 1, zad 3
struct KontoBankowe {
    string imie;
    string nazwisko;
    double saldo;
};

void wplac(KontoBankowe kb, double kwota) {
    kb.saldo += kwota;
}

bool wyplata(KontoBankowe kb, double kwota) {
    if (kwota < kb.saldo) {
        kb.saldo -= kwota;
        return true;
    } else {
        return false;
    }
}

//cw 6, lista 1, zad 4
struct Produkt {
    string nazwa;
    double cena;
    int miejsceSkladowaniaRegal;
    int miejsceSkladowaniaPolka;
};

Produkt sok = {"Orange", 13.50, 1,1};
Produkt chipsy = {"Lays", 4.50, 1,2};
Produkt owoce = {"Winogrona", 8.50, 1,3};

Produkt tablica[] = {sok, chipsy, owoce};

void sortuj (Produkt produkt[], int N) {
    Produkt temp;
    for (int i = 0;i < N; i++) {
        for (int j = 0;j < N-1; j++) {
            if (produkt[j].cena > produkt[j+1].cena) {
                temp = produkt[j];
                produkt[j] = produkt[j+1];
                produkt[j+1] = temp;
            }
        }
    }
}

void wyswietl (Produkt produkt[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "nazwa: " << produkt[i].nazwa << ", "
             << "cena: " << produkt[i].cena << ", "
             << "numer regalu: " << produkt[i].miejsceSkladowaniaRegal << ", "
             << "numer polki: " << produkt[i].miejsceSkladowaniaPolka << endl;
    }
}

int main() {
    Produkt sok = {"Orange", 13.50, 1,1};
    Produkt chipsy = {"Lays", 4.50, 1,2};
    Produkt owoce = {"Winogrona", 8.50, 1,3};

    sortuj(tablica, 3);
    wyswietl(tablica, 3);

    return 0;
}
