#include "complex.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>

void adunare_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar) {
	numar->parte_reala = (a.parte_reala + b.parte_reala);
	numar->parte_imaginara = (a.parte_imaginara + b.parte_imaginara);
 }

void scadere_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar) {
	numar->parte_reala = (a.parte_reala - b.parte_reala);
	numar->parte_imaginara = (a.parte_imaginara + b.parte_imaginara);
}

void inmultire_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar) {
	numar->parte_reala = ((a.parte_reala * b.parte_reala) - (a.parte_imaginara * b.parte_imaginara));
	numar->parte_imaginara = ((a.parte_reala * b.parte_imaginara) + (a.parte_imaginara * a.parte_imaginara));
}

void impartire_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar) {
	numar->parte_reala = ((a.parte_reala * b.parte_reala) + (a.parte_imaginara * b.parte_imaginara)) / ((b.parte_reala * b.parte_reala) + (b.parte_imaginara * b.parte_imaginara));
	numar->parte_imaginara = ((b.parte_reala * a.parte_imaginara) - (a.parte_reala * b.parte_imaginara)) / ((b.parte_reala * b.parte_reala) + (b.parte_imaginara * b.parte_imaginara));
}

void citire_numere_complexe(numar_complex* numar) {
	printf("Parte reala:");
	scanf_s("%lf", &(numar->parte_reala));
	printf("Parte imaginara:");
	scanf_s("%lf", &(numar->parte_imaginara));
}

void afisare_rezultat(numar_complex rezultat_impartire) {
	if (rezultat_impartire.parte_reala) {
		printf("%lf", rezultat_impartire.parte_reala);
		if (rezultat_impartire.parte_imaginara) {
			if (rezultat_impartire.parte_imaginara > 0) {
				printf("+");
			}
			printf("%lfi", rezultat_impartire.parte_imaginara);
		}
	}
	else {
		if (rezultat_impartire.parte_imaginara) {
			printf("%lf", rezultat_impartire.parte_imaginara);
		}
		else {
			printf("0");
		}
	}
}