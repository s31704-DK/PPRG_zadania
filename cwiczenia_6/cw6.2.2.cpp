#include <iostream>
using namespace std;


//1
struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};


//2
void sortujOsoby(Osoba osoby[], int dlugoscOsoby) {
    Osoba temp;
    for (int i = 0; i < dlugoscOsoby; i++) {
        for (int j = 0; j < dlugoscOsoby-1; j++) {
            if (osoby[j].nazwisko > osoby[j+1].nazwisko) {
                temp = osoby[j];
                osoby[j] = osoby[j+1];
                osoby[j+1] = temp;
            } else if (osoby[j].nazwisko == osoby[j+1].nazwisko
                        && osoby[j].imie > osoby[j+1].imie) {
                temp = osoby[j];
                osoby[j] = osoby[j+1];
                osoby[j+1] = temp;
            } else if (osoby[j].nazwisko == osoby[j+1].nazwisko
                       && osoby[j].imie == osoby[j+1].imie
                       && osoby[j].wiek > osoby[j+1].wiek) {
                temp = osoby[j];
                osoby[j] = osoby[j + 1];
                osoby[j + 1] = temp;
            }
        }
    }
}


//3
void wyswietlOsoby(Osoba osoby[], int N) {
    for (int i = 0; i < N; i++) {
        cout << "imie: " << osoby[i].imie << ", "
             << "nazwisko: " << osoby[i].nazwisko << ", "
             << "wiek: " << osoby[i].wiek << ", " << endl;
    }
}


//4
void wyswietlOsobyStarsze(Osoba osoby[], int wiekGraniczny, int N=4) {
    for (int i = 0; i < N; i++) {
        if (osoby[i].wiek > wiekGraniczny) {
            cout << "imie: " << osoby[i].imie << ", "
                 << "nazwisko: " << osoby[i].nazwisko << ", "
                 << "wiek: " << osoby[i].wiek << ", " << endl;
        }
    }
}

//5
Osoba tablicaUzytkownika[] = {};
void wprowadzDane(int rozmiar){
    string imieOsoby;
    string nazwiskoOsoby;
    int wiekOsoby;
    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj po kolei imie, nazwisko i wiek pracownika, kazde zatwierdzajac" << endl;
        getline(cin, imieOsoby);
        getline(cin, nazwiskoOsoby);
        cin >> wiekOsoby;
        Osoba osobaUzytkownika = {imieOsoby, nazwiskoOsoby, wiekOsoby};
        tablicaUzytkownika[i] = osobaUzytkownika;
        cin.get();
    }
}

int main() {
    Osoba osoba1 = {"Filip", "Stenger", 60};
    Osoba osoba2 = {"Filip", "Stenger", 65};
    Osoba osoba3 = {"Gilip", "Stenger", 12};
    Osoba osoba4 = {"Filip", "Ttenger", 13};

    Osoba tablica[] = {osoba2, osoba1, osoba4, osoba3};

    //sortujOsoby(tablica, 4);
    //wyswietlOsoby(tablica, 4);
    //wyswietlOsobyStarsze(tablica, 55);



    //menu
    bool menuGlowne = true;

    while (menuGlowne) {
        int wyborUzytkownika;
        bool czyMenuGlowne = false;
        int czyPosortowani;
        cout << "Witaj! Wybierz, co chcesz zrobic (wybierz pozycje i zatwierdz):" << endl
             << "1. Wprowadz osoby" << endl
             << "2. Wyswietl wszystkie osoby" << endl
             << "3. Wyswietl wybrane osoby" << endl
             << "4. Filtruj osoby" << endl
             << "5. Zakoncz" << endl;
        cin >> wyborUzytkownika;


        unsigned int ileOsob;
        switch(wyborUzytkownika) {
            case 1:
                cout << "Podaj ile osob chcesz wprowadzic do bazy" << endl;
                cin >> ileOsob;
                cin.get();
                if (ileOsob == 0) {
                    break;
                } else {
                    wprowadzDane(ileOsob);
                }
                break;
            case 2:
                wyswietlOsoby(tablicaUzytkownika, ileOsob);
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                menuGlowne = false;
        }
    }

    return 0;
}