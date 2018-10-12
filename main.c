#include <stdio.h>

int main() {
    char znak;

    int wartosc_calkowita;
    double wartosc_wymierna;
    char ciag_znakow[256];

    char opcja = 'X';
    char *Napis = "Opis programu";

    printf("podaj znak ");
    scanf("%c", &znak);

    printf("podaj liczbe calkowita ");
    scanf(" %i", &wartosc_calkowita);

    printf("podaj liczbe zmiennoprzecinkowa");
    scanf(" %lf", &wartosc_wymierna);

    printf("podaj ciąg ", ciag_znakow);
    scanf("%s", ciag_znakow);

    printf("znak to %c, liczba calkowita to %i, liczba zmiannoprzecinkowa to %lf, ciag to %s \n", znak, wartosc_calkowita, wartosc_wymierna, ciag_znakow);

    printf("wybrano opcje %c : %31s", opcja, Napis);

    return 0;
};