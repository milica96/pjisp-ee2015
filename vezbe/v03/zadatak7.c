/*
	Napisati program koji učitava
	kvadratnu matricu A odabrane
	dimenzije n i na osnovu nje formira
	matricu B čiji su elementi:
	+
	na mestima gde se u matrici A nalaze
	negativni parni brojevi,
	*
	na mestima
	na kojima se nalaze neparni brojevi I
	–
	na ostalim mestima.
*/
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 10

int main() {
	int A[MAX_SIZE][MAX_SIZE]; 
	char B[MAX_SIZE][MAX_SIZE];
	int i, j, n;
	
	do {
        printf("Unesite dimenziju kvadratne matrice (do %d elemenata): ", MAX_SIZE);
        scanf("%d", &n);
    } while(n <= 0 || n > MAX_SIZE);
    	
    for (i=0; i<n; i++)
		for (j=0; j<n; j++) {
			printf("A[%d][%d] = ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}

	for (i=0; i<n; i++)
		for (j=0; j<n; j++) {
			if(abs(A[i][j]%2)==1)
				B[i][j] = '*';
			else if (A[i][j] < 0)
				B[i][j] = '+';
			else 
				B[i][j] = '-';
		}
		
	printf("\n");
		
	for(i = 0;i < n;i++) {
        for(j = 0;j < n;j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

	printf("\n");
		
	for(i = 0;i < n;i++) {
        for(j = 0;j < n;j++) {
            printf("%c\t", B[i][j]);
        }
        printf("\n");
    }
}
