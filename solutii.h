#include "algoritmi.h"

//1. Se citesste un vector de maxim 2000 de numere cu valori intre 1-100 de la tastatura...
//a) Sa se afiseze numarul ce are frecventa cea mai mica si ceea mai mare din vectorul citit

void sol1() {

	int n;
	cin >> n;

	int fr[101] = { 0 };

	vectoriDeFrecventaCifraMinMax(n, fr);


}