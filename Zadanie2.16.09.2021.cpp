﻿#include <iostream>
using namespace std;
int main()
{
	int tab[2][2];
	int a;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> a;
			tab[i][j] = a;
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cout << tab[i][j] << " ";
		cout << endl;
	}
	int w = tab[0][0] * tab[1][1] - tab[1][0] * tab[0][1];
	cout << "Wyznacznik wynosi " << w << endl;
}