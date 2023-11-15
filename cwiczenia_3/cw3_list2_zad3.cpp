#include <iostream>
#include <map>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;


//Lista 2, zad 3 - kamien papier nozyce;
int main() {
    //deklaracja biblioteki-interfejsu
    map<int, string> kamienPapierNozyceKomputer = {
            {1, "kamien"},
            {2, "papier"},
            {3, "nozyce"}
    };

    map<string, int> kamienPapierNozyceGracz = {
            {"kamien", 1},
            {"papier", 2},
            {"nozyce", 3}
    };

    bool grajDalej = true;
    string yesNo;

    while (grajDalej) {
        //deklaracja wyboru gracza-osoby
        string wyborGraczaChars;
        cout << "kamien, papier, nozyce, wybierz madrze" << endl;
        getline(cin, wyborGraczaChars);
        auto wyborGraczaInt = kamienPapierNozyceGracz.find(wyborGraczaChars)->second;

        //deklaracja wyboru gracza-komputera
        srand(time(0));
        int wylosowana = (rand() % 3) + 1;
        auto wyborKomputera = kamienPapierNozyceKomputer.find(wylosowana)->second;

        switch (wyborGraczaInt) {
            case 1:
                if (wylosowana == 1) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Remis" << endl;
                }
                if (wylosowana == 2) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Komputer wygral" << endl;
                }
                if (wylosowana == 3) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Gracz wygral" << endl;
                }
                break;
            case 2:
                if (wylosowana == 1) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Gracz wygral" << endl;
                }
                if (wylosowana == 2) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Remis" << endl;
                }
                if (wylosowana == 3) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Komputer wygral" << endl;
                }
                break;
            case 3:
                if (wylosowana == 1) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Komputer wygral" << endl;
                }
                if (wylosowana == 2) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Gracz wygral" << endl;
                }
                if (wylosowana == 3) {
                    cout << wyborGraczaChars << " vs " << wyborKomputera << endl << "Remis" << endl;
                }
        }
        cout << "Czy chesz zagrac jeszcze raz? (y/n)" << endl;
        cin >> yesNo;

        if (yesNo == "y") {

            grajDalej = true;
        } else {

            grajDalej = false;
        }
    }

    return 0;
}