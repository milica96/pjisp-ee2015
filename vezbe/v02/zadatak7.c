/*
    Realizovati mnozenje i deljenje pomocu sabiranja i oduzimanja.
*/

#include <stdio.h>

int main() {
    int a, b, proizvod = 0, kolicnik = 0;
    int i;

    printf("Unesite prvi broj: ");
    scanf("%d", &a);

    printf("Unesite drugi broj: ");
    scanf("%d", &b);

    for(i = 0;i < b;i++) {
        proizvod += a;      // b puta dodaj a
    }

    while(a >= b) {
        a -= b;             // oduzimaj delilac od deljenika dokle god je delilac veci ili jednak
        kolicnik++;         // broj koliko puta je to uspelo
    }

    printf("Vrednost proizvoda je %d, a vrednost kolicnika je %d.\n", proizvod, kolicnik);

    return 0;
}
