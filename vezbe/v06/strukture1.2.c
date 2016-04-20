/*
Uèitati dva kompleksna broja, realizovati
sabiranje i oduzimanje kompleksnih
brojeva.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct complex_st {
    int re, im;
}COMPLEX;

COMPLEX sabiranje(COMPLEX, COMPLEX);
COMPLEX oduzimanje(COMPLEX, COMPLEX);
int main()
{
    COMPLEX z1, z2, zbir, razlika;

    printf("Unesite prvi kompleksni broj (RE IM)");
    scanf("%d %d", &z1.re, &z1.im);
    printf("Unesite drugi kompleksni broj (RE IM)");
    scanf("%d %d", &z2.re, &z2.im);

    zbir = sabiranje(z1, z2);
    razlika = oduzimanje(z1, z2);

    printf("Zbir unetih kompleksnih brojeva je %d + %di a razlika je %d + %di\n", zbir.re, zbir.im, razlika.re, razlika.im);

    return 0;
}

COMPLEX sabiranje(COMPLEX z1, COMPLEX z2) {
    COMPLEX rezultat;
    rezultat.re = z1.re + z2.re;
    rezultat.im = z1.im + z2.im;
    return rezultat;
}
COMPLEX oduzimanje(COMPLEX z1, COMPLEX z2) {
    COMPLEX rezultat;
    rezultat.re = z1.re - z2.re;
    rezultat.im = z1.im - z2.im;
    return rezultat;
}
