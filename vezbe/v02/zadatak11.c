/*
Napisati program kojim se štampaju svi trocifreni Armstrongovi brojevi. Broj je Armstrongov ako je jednak zbiru kubova svojih cifara.
*/

#include <stdio.h> 
#include <math.h>

int main() {

	int i;
	int cifra1, cifra2, cifra3;

	printf("Svi trocifreni Armstrongovi brojevi su:\n");
	for(i=100; i<1000; i++) {
		cifra3 = i%10;
		cifra2 = (i/10)%10;
		cifra1 = i/100;

		if (i == (pow(cifra1, 3) + pow(cifra2, 3) + pow(cifra3, 3)))
			printf("%d  ", i);
	}
	printf("\n");

	return 0;
}
