#pragma once
#include <iostream>
#include <string.h>
using namespace std;


void afisareVec(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
}

void vectoriDeFrecventaCifra(int n, int fr[101]) {

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		fr[x] >> x;
	}

	for (int i = 1; i <= 100; i++) {
		if (fr[i] > 0) { 
			cout << i << " apare de " << fr[i] << " ori in sir";
		}
	}
}



void vectoriDeFrecventaCifraMinMax(int n, int fr[101]) {

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;

		fr[x] >> x;
	}

	int minFrecventa = n;
	int maxFrecventa = 0;
	int minNumar = -1;
	int maxNumar = -1;

	for (int i = 1; i <= 100; i++) {
		if (fr[i] > 0) {
			if (fr[i] < minFrecventa) {
				minFrecventa = fr[i];
				minNumar = i;
			}
			if (fr[i] > maxFrecventa) {
				maxFrecventa = fr[i];
				maxNumar = i;
			}
			
		}
	}
	cout << "Numarul cu frecventa cea mai mica: " << minNumar << " cu frecventa " << minFrecventa << endl;
	cout << "Numarul cu frecventa cea mai mare: " << maxNumar << " cu frecventa " << maxFrecventa << endl;
}
