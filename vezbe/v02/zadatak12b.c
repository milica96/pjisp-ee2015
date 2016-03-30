/*
Za svaku od navedenih formula napisati program koji računa broj π (preciznost zavisi od dužine niza):
b) pi/4 = 1 - 1/3 + 1/5 - 1/7...
*/

#include <stdio.h>

int main() {

	int i, n, znak = 1;
	float pi, suma = 0.0;

	printf("Unesite duzinu niza: ");
	scanf("%d", &n);

//Koristeci samo brojacku promenljivu:
	for (i=0; i<n; i++){
		suma += znak * (1.0/(i*2+1));
		znak *= -1;
	}

/*	for(i=1; i<=n; i++) {
		suma += znak * (1.0/x);
		x+=2;
		znak *= -1;
	}
*/
	pi = 4 * suma;
	printf("Broj PI iznosi %f\n", pi);
	return 0;
}
