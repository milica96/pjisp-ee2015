/*
    Napisati program koji zadatu matricu A transponuje i ispisuje na
    standardni izlaz. Transponovanje matrica vrsi se zamenom vrsta
    odgovarajucim kolonama
*/
#include <stdio.h>

#define MAX_SIZE 10


int main() {
    double A[MAX_SIZE][MAX_SIZE];
    int i, j, n, m;

    do {
        printf("Uneti dimenzije matrice (n, m): ");
        scanf("%d, %d", &n, &m);
    } while((n <= 0 || n > MAX_SIZE) && (m <= 0 || m > MAX_SIZE));

    for(i = 0;i < n;i++) {
        for(j = 0;j < m;j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }

    printf("Ispis matrice:\n");
    for(i = 0;i < n;i++) {
        for(j = 0;j < m;j++) {
            printf("%.2lf\t", A[i][j]);
        }
        printf("\n");
    }

    double temp;
    for(i = 0;i < n;i++) {
        for(j = 0;j < m;j++) {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        } 
    }

    printf("Ispis transponovane matrice:\n");
    for(i = 0;i < m;i++) {
        for(j = 0;j < n;j++) {
            printf("%.2lf\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
