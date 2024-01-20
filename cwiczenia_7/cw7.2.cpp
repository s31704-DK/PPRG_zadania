#include <iostream>
using namespace std;

//cw 7 zad 2
int dlugoscNapisu72(char lanuchZnakow[]) {
    char *ptr = lanuchZnakow;
    int userStrLength = 0;

    while (*ptr != '\0') {
        userStrLength++;
        ptr++;
    }

    return userStrLength;
}

int main() {
    //wywolanie cw 7 zad 2
    char userStr[100];
    cout << "Wprowadz lanczuch znakow" << endl;
    cin.getline(userStr, 100);

    cout << "dlugosc podanego lancucha: " << dlugoscNapisu72(userStr) << endl;

    return 0;
}
