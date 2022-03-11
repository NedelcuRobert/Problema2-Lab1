#include "complex.h"
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {

	numar_complex a, b, rezultat_impartire;

	printf("Introduceti primul numar complex:\n");
	citire_numere_complexe(&a);

	printf("Introduceti al doilea numar complex:\n");
	citire_numere_complexe(&b);

	impartire_numere_complexe(a, b, &rezultat_impartire);

	printf("Solutia este:");
	afisare_rezultat(rezultat_impartire);

	return 0;
}