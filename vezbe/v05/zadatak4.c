/*
Napisati funkciju koja kao parametre uzima
jedan string i karakter, a vraća broj
pojavljivanja tog karaktera u string. Napisati
test program. (Primer: str=“tatatatira”,
c=‘a’, povratna vrednost je 4).
*/

#include <stdio.h>
#define max_size 20

int br_ponavljanja(char *, char);

int main() {

	char string[max_size];
	char c;
	
	printf("Unesite string: ");
	__fpurge(stdin);
	scanf("%s", string);
	
	printf("Unesite karakter za proveru: ");
	__fpurge(stdin);
	scanf("%c", &c);
	
	printf("Broj ponavljanja karaktera %c u stringu %s je %d\n", c, string, br_ponavljanja(string,c));
	

	return 0;
}

int br_ponavljanja(char *string, char c) {
	
	int brojac = 0;
	
	while(*string) {
		if(*string == c) {
			brojac++;
		}
		string++;
	}

	return brojac;
}






