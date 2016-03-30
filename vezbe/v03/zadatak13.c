/*
    Napisati program koji iz niza karaktera X maksimalne duzine
    50 izostavlja zadati karakter a
*/

/*
    ----------------------- NAPOMENA --------------------------

    U kodu, prilikom koriscenja funkcije scanf za unos, dolazi
    poziv funkcije __fpurge(stdin). Ovo je neophodno, iz razloga
    sto prilikom ucitavanja vrednosti sa tastature, u tzv. ulaznom
    baferu ostaju '\n' karakteri, koji ce prilikom poziva scanf
    funkcije koja ucitava karakter biti uzeti u obzir, sto za
    posledicu ima da korisnik ne moze da ucita zeljeni karakter,
    vec ce njegovo mesto zauzeti '\n' karakter.
    Na Windows platformi, umesto poziva __fpurge(stdin), koristi
    se funkcija fflush, na identican nacin fflush(stdin).

    ----------------------- NAPOMENA --------------------------
*/

#include <stdio.h>

#define MAX_SIZE 50

int main() {
    char X[MAX_SIZE];
    int i, n, m;

    do {
        printf("Unesite velicinu niza: ");
        scanf("%d", &n);
        __fpurge(stdin);
    } while(n <= 0 || n > MAX_SIZE); 

    for(i = 0;i < n;i++) {
        printf("X[%d] = ", i);
        scanf("%c", &X[i]); 
        __fpurge(stdin);
    }

    printf("Sadrzaj niza pre izbacivanja karaktera: ");
    for(i = 0;i < n;i++) {
        if(i > 0) {
            printf(", ");
        }
        printf("%c", X[i]);
    }

    char a, Y[MAX_SIZE];

    printf("\n");
    printf("Unesite znak koji zelite da izostavite: ");
    scanf("%c", &a);
    __fpurge(stdin);

    for(i = 0, m = 0;i < n;i++) {
        if(X[i] != a) {
            Y[m] = X[i];
            m++;
        }
    }

    printf("Rezultujuci niz sa izbacenim karakterom '%c': ", a);
    for(i = 0;i < m;i++) {
        if(i > 0) {
            printf(", ");
        }
        printf("%c", Y[i]);
    }

    printf("\n");

    return 0;
}
