/*
Prebrojati reèi iz ulazne datoteke. U
izlaznoj datoteci ispisati broj reèi i
najdužu pronaðenu reè. Koristiti
funkcije, imena datoteka prihvatiti
kroz argumente komandne linije.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME 30
#define MAX_STRING 101

FILE *safe_open(char*, char*);
void ucitavanje(FILE *, FILE *);

int main()
{
    FILE *in, *out;
    char sin[MAX_NAME], sout[MAX_NAME];

    printf("Unesite ime ulazne datoteke: ");
    __fpurge(stdin);
    scanf("%s", sin);

    printf("Unesite ime ulazne datoteke: ");
    __fpurge(stdin);
    scanf("%s", sout);

    in = safe_open(sin, "r");
    out = safe_open(sout, "w");

    ucitavanje(in, out);

    fclose(in);
    fclose(out);

    return 0;
}

FILE *safe_open(char *name, char *mode) {
    FILE *fp = fopen(name, mode);

    if(fp == NULL) {
        printf("Doslo je do greske prilikom otvaranja fajla %s.\n", name);
        exit(EXIT_FAILURE);
    }

    return fp;
}
void ucitavanje(FILE *in, FILE *out) {
    int broj =0;
    char string[MAX_STRING];
    int max_s = 0;
    char longest[MAX_STRING];

    while(fscanf(in, "%s", string) != EOF) {
        broj++;
        if (max_s < strlen(string)) {
            max_s = strlen(string);
            strcpy(longest, string);
        }
    }

    fprintf(out,"Ucitano je %d stringova od kojih je najduzi: %s.\n", broj, longest);
}
