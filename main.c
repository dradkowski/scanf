#include <stdio.h>

int main() {
    char znak;

    int wartosc_calkowita;
    double wartosc_wymierna;

    printf("podaj znak ");
    scanf("%c", &znak);

    printf("podaj liczbe calkowita ");
    scanf(" %i", &wartosc_calkowita);

    printf("podaj liczbe zmiennoprzecinkow a");
    scanf(" %lf", &wartosc_wymierna);

    printf("znak to %c, liczba calkowita to %i, liczba zmiannoprzecinkowa to %lf", znak, wartosc_calkowita, wartosc_wymierna);

    return 0;
}