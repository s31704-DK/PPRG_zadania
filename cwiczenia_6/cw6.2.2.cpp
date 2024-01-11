#include <iostream>
using namespace std;

/* 8
    Przedstawione menu przewiduje wielokrotne skorzystanie z zawartych wen funkcji.
    Menu bedzie dzialac, dopoki nie zostanie wprowadzona odpowiednia wartosc konczaca
    dzialanie programu. Na potrzeby "ciaglego" uzywania menu, funkcje modyfikujace
    tablice z danymi Osob zostaly zaimplemetnowane, aby takie korzystanie z programu w ogole
    mialo sens.
    Niemniej jednak program oczywiscie zawiera wady z tym zwiazane wynikajace
    z ograniczonych umiejetnosci czy czasu, np.:
        -funkcja sortujaca dziala bezposrednio na tablicy, a nie na jej kopii, totez,
            totez po posortowaniu jej zawartosci nie da sie odwrocic tego procesu.
        -brak zabezpieczenia przed nieprawidlowymi wartosciami lub typami danych
        -usuwanie danych dziala wirtualnie - rozmiar tablicy nie ulega zmianie,
            jedynie widok*/

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

void dodajDane(int obecnaLiczbaRekordow, int liczbaNowychRekordow) {
    string imieOsoby;
    string nazwiskoOsoby;
    int wiekOsoby;
    for (int i = obecnaLiczbaRekordow; i < obecnaLiczbaRekordow + liczbaNowychRekordow; i++) {
        cout << "Podaj po kolei imie, nazwisko i wiek pracownika, kazde zatwierdzajac" << endl;
        getline(cin, imieOsoby);
        getline(cin, nazwiskoOsoby);
        cin >> wiekOsoby;
        Osoba osobaUzytkownika = {imieOsoby, nazwiskoOsoby, wiekOsoby};
        tablicaUzytkownika[i] = osobaUzytkownika;
        cin.get();
    }
}

void usunDane(unsigned int obecnaLiczbaRekordow, unsigned int indeksDoUsuniecia) {
    indeksDoUsuniecia -= 1;
    for (int i = indeksDoUsuniecia; i < obecnaLiczbaRekordow; i++) {
        tablicaUzytkownika[i] = tablicaUzytkownika[i+1];
    }
}

int main() {
    //6, 7 - menu
    bool menuGlowne = true;

    while (menuGlowne) {
        unsigned int wyborUzytkownika;
        bool czyWyjscDoMenuGlowne = true;
        unsigned int czyPosortowani;
        unsigned int wiekGraniczny;
        unsigned int ileOsob;
        unsigned int ileDodac;
        unsigned int ileRekordow;
        unsigned int ktoryRekord;

        cout << "Witaj! Wybierz, co chcesz zrobic (wybierz pozycje i zatwierdz):" << endl
             << "1. Wprowadz osoby" << endl
             << "2. Dodaj osoby" << endl
             << "3. Wyswietl wszystkie osoby" << endl
             << "4. Wyswietl wybrane osoby" << endl
             << "5. Filtruj osoby po wieku" << endl
             << "6. Usun osoby" << endl
             << "7. Zakoncz" << endl; //7
        cin >> wyborUzytkownika;

        switch(wyborUzytkownika) {
            case 1:
                cout << "Podaj ile osob chcesz wprowadzic do bazy" << endl;
                cin >> ileOsob;
                cin.get();
                if (ileOsob == 0) {
                    break;
                } else {
                    wprowadzDane(ileOsob);
                    break;
                }
            case 2:
                cout << "Podaj ile osob chcesz dodac do bazy" << endl;
                cin >> ileDodac;
                cin.get();
                if (ileOsob == 0) {
                    break;
                } else {
                    dodajDane(ileOsob, ileDodac);
                    ileOsob += ileDodac;
                    break;
                }
            case 3:
                czyWyjscDoMenuGlowne = false;
                while (!czyWyjscDoMenuGlowne) {
                    cout << "1) Wyswietl posortowana liste" << endl
                         << "2) wyswietl nieposortowana liste" << endl
                         << "0) wyjdz do menu glownego" << endl;
                    cin >> czyPosortowani;
                    cin.get();
                    if (czyPosortowani == 0) {
                        czyWyjscDoMenuGlowne = true;
                    } else if (czyPosortowani == 1) {
                        sortujOsoby(tablicaUzytkownika, ileOsob);
                        wyswietlOsoby(tablicaUzytkownika, ileOsob);
                        break;  /*program pracuje bezposrednio na tablicy, a nie na jej kopii,
                                takze po posortowaniu nie ma juz sensu wracac do pytania czy
                                ma program ma wyswietlic tablice posortowana czy tez nie*/
                    } else if (czyPosortowani == 2) {
                        wyswietlOsoby(tablicaUzytkownika, ileOsob);
                    }
                }
                break;
            case 4:
                czyWyjscDoMenuGlowne = false;
                while (!czyWyjscDoMenuGlowne) {
                    cout << "Podaj ilosc rekordow albo 0, aby wyjsc do menu glownego" << endl;
                    cin >> ileRekordow;
                    cin.get();
                    if (ileRekordow == 0) {
                        czyWyjscDoMenuGlowne = true;
                    } else if (ileRekordow <= ileOsob){
                        wyswietlOsoby(tablicaUzytkownika, ileRekordow);
                    } else {
                        cout << "Nie ma tylu rekordow" << endl;
                    }
                }
                break;
            case 5:
                czyWyjscDoMenuGlowne = false;
                while (!czyWyjscDoMenuGlowne) {
                    cout << "Podaj wiek graniczny albo 0, aby wyjsc do menu glownego" << endl;
                    cin >> wiekGraniczny;
                    cin.get();
                    if (wiekGraniczny == 0) {
                        czyWyjscDoMenuGlowne = true;
                    } else {
                        wyswietlOsobyStarsze(tablicaUzytkownika, wiekGraniczny);
                    }
                }
                break;
            case 6:
                cout << "Podaj, ktory rekord chcesz usunac albo wprowadz 0, aby powrocic"
                        "do menu glownego" << endl;
                cin >> ktoryRekord;
                cin.get();
                if (ktoryRekord == 0) {
                    break;
                } else if (ktoryRekord == ileOsob) {
                    ileOsob -= 1;
                    break;
                } else if (ktoryRekord > ileOsob) {
                    cout << "Nie ma takiego rekordu" << endl;
                    break;
                } else {
                    usunDane(ileOsob, ktoryRekord);
                    ileOsob -= 1;
                    break;
                }
            case 7:
                menuGlowne = false;
        }
    }
    return 0;
}