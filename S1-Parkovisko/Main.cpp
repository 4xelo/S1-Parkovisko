#include <iostream>

#include "Main.h"
using namespace std;
int stav[4][4] = { {0,0,0,1}, {1,2,0,1},{1,2,2,3},{3,3,2,3} };
int aktualny = 0;
char vstup;
string semafor = "Zelena";

void main() {
	// 0 nastavi A, 1 nastavi B, k ukonci program
	cout << "Platne hodnoty: 0,1,k" << endl;
	cout << "0 -> nastavi hodnotu A\n" << "1 -> nastavi hodnotu B\n" << "k -> ukonci program \n";
	cout << "Aktualne nastavenie: " << "S" << aktualny << " Svieti: " << semafor << endl;
	cout << endl;
	while (true) {
		cout << "Zadaj Hodnotu A: ";
		cin >> vstup;

		if (vstup == 'k') {
			return;
		}
		if (vstup == '0') {
			cout << "Zadaj Hodnotu B: ";
			cin >> vstup;
			if (vstup == '1')//0,1
				aktualny = stav[aktualny][3];
			else if (vstup == '0')//0,0
				aktualny = stav[aktualny][0];
			else if (vstup == 'k')
			return;
		}
		else if (vstup == '1') {
			cout << "Zadaj hodnotu B: ";
			cin >> vstup;
			if (vstup == '0') //1,0
				aktualny = stav[aktualny][1];
			else if (vstup == '1')//1,1
				aktualny = stav[aktualny][2];
			else if (vstup == 'k')
				return;
		}
		if (aktualny <= 1)
			semafor = "Zelena";
		if (aktualny >= 2)
			semafor = "Cervena";
		cout << "Aktualne nastavenie stavu: " << "S" << aktualny << " Svieti: " << semafor << endl;
		cout << endl;
	}
}