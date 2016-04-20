/*
Napisati program koji proverava da li je
učitani string palindrom. Program napraviti
tako da radi za reči a potom ga proširiti da
radi i sa rečenicama (ignorišući znakove
razmaka) kako bi string “Ana voli Milovana”
program registrovao kao palindrom.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101

void unesi(char*);
void izbaci_razmake(char *, char *);
void smanji_slova(char*);
int palindrom(char*);

int main() {
	
	char a[MAX_SIZE], b[MAX_SIZE];
	
	unesi(a);
	izbaci_razmake(a,b);
	smanji_slova(b);
	if (palindrom(b))
		printf("Uneti niz %s je palindrom.\n",a);
	else 
		printf("Uneti niz %s nije palindrom.\n",a);

	return 0;
}

void unesi(char *niz) {
	printf("Unesite string: ");
	__fpurge(stdin);
	gets(niz);
}

void izbaci_razmake(char *a, char *b) {
	int i = 0;

	do {
		if(*a != ' ' && *a != '\t') {
			b[i] = *a;
			i++;
		}
		a++;
	}while(*a);	

}
void smanji_slova(char *niz) {
	while(*niz) {
		if (*niz >= 'A' && *niz <= 'Z')
			*niz += 32;
		niz++;
	}
}

int palindrom(char *niz){
	
	char *pkraj = niz + strlen(niz) - 1;	//pokazuje na poslednji clan
	
	while (niz < pkraj) {
		if (*niz != *pkraj) 
			return 0;
		niz++;
		pkraj--;
	}
	return 1;
}
