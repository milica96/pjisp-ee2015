/* uneti niz max 20 koji predstavlja vreme da pojedinacan kupac bude usluzen
* onda formirati novi koji treba da predstavi cekanje svakog kupca 
* tako da kupac i+1 ce da ceka koliko i kupac i + njegovo vreme usluzivanja
* ispisi oba niza */
#include<stdio.h>
#define max 30
void upisniza (int *a, int *n);
void ispisniza (int *a, int n);
int main ()
{
int T[max];
int n;
upisniza(T, &n);
int C[max];
C[0]=0;
int i;
for (i = 1; i < n; i++)
{
	C[i]=C[i-1]+T[i-1];
}
ispisniza(T,n);
ispisniza(C,n);


return 0;
}
void upisniza (int *a, int *n)
{
	do
	{
		printf("upisi broj elemenata niza\n");
		scanf("%d", n);
	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
		{
			printf("T[%d] =",i );
			scanf("%d", &a[i]);
		}

}
void ispisniza (int *a, int n)
{
	int i;
	printf("C = [");
	for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			if(i<n-1) printf(",");
		}
	printf("]\n");

}