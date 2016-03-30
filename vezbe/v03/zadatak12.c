/*
	Dati su vektori a i b, sa maksimalno
	20 elemenata. Izračunati vektorski i
	skalarni proizvod datih vektora.
	NAPOMENA!!! - maksimalna duzina vektora i jedina potrebna je 3, 
	ogranicenje sam slucajno prenela iz nekog drugog zadatka.
*/
#include <stdio.h>
#include <math.h>
#define SIZE 3

int main(){
	int a[SIZE], b[SIZE], i;
	char help[SIZE] = {'i', 'j', 'k'};
	
	printf("Unesite koordinate prvog vektora: \n");
	for(i=0; i<SIZE; i++) {
		printf("a[%d] =  ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\nUnesite koordinate drugog vektora: \n");
	for(i=0; i<SIZE; i++) {
		printf("a[%d] =  ", i+1);
		scanf("%d", &b[i]);
	}
	
	int s=0, v[SIZE];
	
	for(i=0; i<SIZE; i++) {
		s+=a[i]*b[i];
	}	
	
	
	v[0] = a[1]*b[2] - a[2]*b[1];
	v[1] = a[2]*b[0] - a[0]*b[2];
	v[2] = a[0]*b[1] - a[1]*b[0];
	
	printf("Za vektore:\na= ");
	for (i=0; i<SIZE; i++) {
		if (a[i]>=0 && i!=0) 
			printf("+");
		printf("%d%c ", a[i], help[i]);
	}
	
	printf(" i\nb= ");
	
	for (i=0; i<SIZE; i++) {
		if (b[i]>=0 && i!=0) 
			printf("+");
		printf("%d%c ", b[i], help[i]);
	}
	
	printf("\nskalarni proizvod iznosi %d, a vektorski proizvod je vektor: v= ", s);
	for (i=0; i<SIZE; i++) {
		if (v[i]>=0 && i!=0) 
			printf("+");
		printf("%d%c ", v[i], help[i]);
	} 
	
	printf("\n");
	return 0;
}
