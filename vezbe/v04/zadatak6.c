/*
    Dat je niz od maksimalno 20 celobrojnih elemenata, na osnovu
    kog je potrebno formirati novi niz koji se sastoji od jedinstvenih
    vrednosti (svaki broj se moze naci iskljucivo jednom u rezultujucem nizu)
*/

#include <stdio.h>

#define MAX_SIZE 20

void unos_niza(int *, int *);
void ispis(int *, int);
int pretraga(int *, int, int);
void filtriranje(int *, int *, int, int *);

int main() {
    int a[MAX_SIZE], b[MAX_SIZE], n, m;

    unos_niza(a, &n);
    ispis(a, n);
    filtriranje(a, b, n, &m);
    ispis(b, m);

    return 0;
}

void unos_niza(int *a, int *pn) {
    int i;

    do {
        printf("Unesite velicinu niza: ");
        scanf("%d", pn);
    } while(*pn <= 0 || *pn > MAX_SIZE);

    for(i = 0;i < *pn;i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void ispis(int *a, int n) {
    int i;

    printf("[");
    for(i = 0;i < n;i++) {
        if(i > 0) {
            printf(", ");
        }
        printf("%d", a[i]);
    }
    printf("]\n");
}

/*
    Ukoliko vrednost postoji u nizu, vrati 1 (logicki tacna vrednost)
    inace vrati 0 (logicki netacna vrednost) 
*/
int pretraga(int *a, int n, int vrednost) {
    int i;

    for(i = 0;i < n;i++) {
        if(a[i] == vrednost) {
            return 1;
        }
    }

    return 0;
}

/*
    Formira novi niz koji se sastoji od jedinstvenih vrednosti
    iz niza koji mu je prosledjen. Povratna vrednost funkcije
    je broj elemenata novonastalog niza
*/
void filtriranje(int *a, int *b, int n, int *pm) {
    int i; 

    *pm = 0;

    for(i = 0;i < n;i++) {
        if(!pretraga(b, *pm, a[i])) {
            b[*pm] = a[i];
            (*pm)++;
        }
    }
}
