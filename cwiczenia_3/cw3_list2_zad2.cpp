#include <iostream>
using namespace std;


//Lista 2, zad 2 - gra w zgadywanie hasla;
int main() {

    string haslo;
    string odpowiedz;
    bool zgadniete = false;

    cout << "Podaj haslo. Bez podgladania!" << endl;
    getline(cin, haslo);

    while (!zgadniete) {
        cout << "Podaj odpowiedz" << endl;
        getline(cin, odpowiedz);

        if (odpowiedz == haslo) {
            cout << "Zgadniete!" << endl;
            zgadniete = true;
        } else {
            cout << "Nie tym razem mordo, chcesz grac dalej? (y/n)" << endl;
            bool yesNo = false;
            do {
                string grajDalej;
                getline(cin, grajDalej);
                if (grajDalej == "y") {
                    zgadniete = false;
                    yesNo = true;
                } else if (grajDalej == "n") {
                    cout << "No trudno." << endl;
                    yesNo = true;
                    zgadniete = true;
                } else {
                    cout << "Tak albo nie. (y/n)" << endl;
                    zgadniete = false;
                    yesNo = false;
                }
            } while (!yesNo);
        }
    }
    cout << "Haslo: " << haslo << endl;
    return 0;
}