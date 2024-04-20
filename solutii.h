#include "algoritmi.h"

//1. Se citesste un vector de maxim 2000 de numere cu valori intre 1-100 de la tastatura...
//a) Sa se afiseze numarul ce are frecventa cea mai mica si ceea mai mare din vectorul citit

void sol1() {

	int n;
	cout << "Introduceti numarul de elemente din vector: ";
	cin >> n;

	int fr[101] = { 0 };

	vectoriDeFrecventaNumarMinMax(n, fr);


}

//b) Sa se afiseze cifra ce are frecventa cea mai mica, respectiv cea mai mare din vectorul citit
void sol2() {

	int n;
	cout << " Introduceti numarul de elemente din vector: ";
	cin >> n;

	int fr[10] = { 0 };

	vectoriDeFrecventaCifraMinMax(n, fr);

}

//c) Sa se afiseze cel mai mare nr de 2 cifre care nu se gaseste in vector
void sol3() {

	int n;
	cout << " Introduceti numarul de elemente din vector: ";

}

//e) Care este frecventa elementului minim, dar a cifrei maxime?

void sol5() {

	int n;
	cout << "Introduceti numarul de elemente din vector: ";
	cin >> n;

	int fr[101] = { 0 };

	vectoriDeFrecventaCifra(n, fr);

	

}