/*
Napisati program za obrtanje
redosleda elemenata niza (menja
prvi element sa poslednji...). Niz
može da ima najviše 20 elemenata.
*/

#include <stdio.h>
#define MAX_SIZE 20

int main() {
	int niz[MAX_SIZE];
	int n, i;
	
	do {
		printf("Unesite velicunu niza (maksimalno do %d elemenata): ", MAX_SIZE);
		scanf("%d", &n);
	} while(n<=0 || n>MAX_SIZE);

	for (i=0; i<n; i++) {
		printf("niz[%d] = ", i+1);
		scanf("%d", &niz[i]); 
	}
	
	printf("\nNiz: [");	
	for (i=0; i<n; i++) {
		printf("%d", niz[i]);
		if (i!=n-1) printf(", ");
	}
	printf("]\n");	
	
	int tmp; 
	for(i=0; i<n/2; i++) {
		tmp = niz[i];			//sacuvamo vrednost prvog elementa u tmp
		niz[i] = niz[n-1-i];	//na mesto prvog elementa upisemo vrednost drugog
		niz[n-1-i] = tmp;		//na mesto drugog upisemo sacuvanu vrednost prvog elementa
	}
	
	printf("Nakon \"obrtanja\" niza---->");
	
	printf("\nNiz: [");	
	for (i=0; i<n; i++) {
		printf("%d", niz[i]);
		if (i!=n-1) printf(", ");
	}
	printf("]\n");	

	return 0;
}
