/* ucitati niz od 20 elemenata
*proveriti ima li susednih istih clanova i koliko ih ima
*izracunati prosecnu vrednost neparnih indeksa (ako ih nema nepisati da ih nema)
*/
#include<stdio.h>
#define max 100
void upis_niza(int *, int *);
int susedi (int *, int);
void pros_nep_indeksa (int *, int);
int main()
{
	int a[max],n;
	upis_niza(a, &n);
	if (susedi(a, n)!=0) printf("u nizu ima istih parova i cak %d \n", susedi(a, n));
	else printf("nema suseda\n");
	pros_nep_indeksa (a,n);
	return 0;
}


void upis_niza(int *a, int *n)
{
	do
	{
		printf("unesite duzinu niza\n");
		scanf("%d",n);
	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
	{
		printf("A[%d] = ", i);
		scanf("%d", &a[i]);
	}

}
int susedi (int *a, int n)
{
	int i;
	int br=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1]) 
		{
			br++;
		}
	}
	return br;

}
void pros_nep_indeksa (int *a, int n)
{

	int i;
	int s=0;
	int p=0;
	for(i=1;i<n;i=i+2)
	{
		s=s+a[i];
		p++;
	}

	if (p==0) printf("nema neparnih brojeva\n");
	else printf("prosecna vrednost neparnih elemenata je %lf \n", (double)s/p); 

}
