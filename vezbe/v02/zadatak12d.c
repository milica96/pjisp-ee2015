/*
Za svaku od navedenih formula napisati program koji računa broj π (preciznost zavisi od dužine niza):
d) pi = 3 + 4/(2*3*4) - 4/(4*5*6) + 4/(6*7*8) - 4/(8*9*10)...
*/


#include <stdio.h>

int main() {

	int i, n, znak = 1;
	float pi= 3.0;

	printf("Unesite duzinu niza: ");
	scanf("%d", &n);

//Koristeci samo brojacku promenljivu:

	for(i=1; i<n; i++) {
		pi += znak * 4.0/(2*i*(2*i+1)*(2*i+2));
		znak *= -1;
	}
	

/*
	int x=2;
	for(i=2; i<=n; i++) {
		pi += znak * 4.0/(x*(x+1)*(x+2));
		x+=2;
		znak *= -1;
	}
*/
	printf("Broj PI iznosi %f\n", pi);
	return 0;
}
