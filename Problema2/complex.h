#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct {
	double parte_reala;
	double parte_imaginara;
}numar_complex;

void adunare_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar);
void scadere_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar);
void inmultire_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar);
void impartire_numere_complexe(numar_complex a, numar_complex b, numar_complex* numar);
void citire_numere_complexe(numar_complex* numar);
void afisare_rezultat(numar_complex rezultat_impartire);

#endif

