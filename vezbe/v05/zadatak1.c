/*
Napisati funkciju koja ispisuje string
obrnutim redom. Napraviti kratak test
program (učitati string i ispisati obrnutim
redosledom karaktere) sa i bez upotrebe f-ije
strlen().
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101

void unesi(char*);
void ispisi_obrnuto(char *, int);
int duzina_stringa(char *);

int main() {

	char niz[MAX_SIZE];
	
	unesi(niz);
	
	printf("Sa upotrebom funkcije strlen: \n");
	int duzina = strlen(niz);
	ispisi_obrnuto(niz, duzina);
	printf("Bez upotrebe funkcije strlen: \n");
	duzina = duzina_stringa(niz) + 1;	//jer mi ne racunamo poslednji karakter \0 kao sto prebrojava funkcija strlen
	ispisi_obrnuto(niz, duzina);
}

void unesi(char *niz) {
	printf("Unesite string za proveru: ");
	__fpurge(stdin);
	gets(niz);

}

void ispisi_obrnuto(char *niz, int duzina) {
	
	
	char *pkraj = niz + duzina;
	
	do {
		pkraj--;
		putchar(*pkraj);
	} while (pkraj != niz);	

	putchar('\n');
	
}

int duzina_stringa(char *niz) {
	int brojac = 0;
	
	while(*niz) {
		brojac++;
		niz++;
	}
	return brojac;
}
	
