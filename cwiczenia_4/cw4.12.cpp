#include <iostream>
using namespace std;

//Cw 4, lista 1, zad 2

//zmienne globalne
int a = 0;
int b = 0;


void zamienZmienne() {
	int support = a;
	a = b;
	b = support;

}

int main()
{//nazwa zmiennej zgodna z zadaniem
	
	cout << "podaj dwie zmienne zatwierdzajac kazda z nich" << endl;
	cin >> a >> b;

	zamienZmienne();
	
	cout << a << ", " << b << endl;
	return 0;
}

