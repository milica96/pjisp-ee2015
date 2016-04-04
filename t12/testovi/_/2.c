/* pon grupa 1
	2.zadatak
	uneti niz, izracunati srednju vrednost niza
	ako je srednja vrednost veca od broja clanova niza ispisujes koliko je clanova vecih od srednje vrednosti
	ako ne ispisujes sve clanove
*/
# include<stdio.h>
#define max 100
void upis_niza(int *a, int *n);
void ispis_niza (int *a, int n);
double aritmeticka_sredina (int *a, int n);
void ispis_clanova_vecih_od (int *a, int n, double x);
int main()
{
	int a[max],n;
	upis_niza(a,&n);
	ispis_niza(a,n); //ispis je samo radi provere
	printf("aritmeticka sredina je %lf\n",aritmeticka_sredina(a,n));//samo radi provere
	if(aritmeticka_sredina(a,n)>n) ispis_clanova_vecih_od(a,n,aritmeticka_sredina(a,n));
	else ispis_niza(a,n);	
	return 0;
	}

void upis_niza(int *a, int *n)
{	
	do
	{	
		printf("broj clanova niza:\n");
		scanf("%d",n);

	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void ispis_niza (int *a, int n)
{
	printf("[");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d", a[i]);
		if (i!=n-1) printf(",");
	}
	printf("]");
	printf("\n");
}
double aritmeticka_sredina(int *a, int n)
{
	int i;
	double suma=0;
	for(i=0;i<n;i++)
	{
		suma=suma+a[i];
	}
	return suma/n;
}
void ispis_clanova_vecih_od (int *a, int n, double x)
{
	printf("[");
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>x)
		{
			printf("%d", a[i]);
			if (i!=n-1) printf(",");
		}
	}
	printf("]");
	printf("\n");
}