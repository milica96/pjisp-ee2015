/*ucitati niz max ==20 
*nalaze se najveca i najmanja vrednost niza
*izbace se max i min i svi njima jednaki
*izracuna se aritmeticka sredina ostalih clanova
*ispise se niz
*ispise se izracunata aritmeticka sredina
*postupak se ponavlja dok n==0
*/
#include<stdio.h>
#define max 30
void upisniza (double *a, int *n);
void ispisniza (double *a, int n);
double maxx (double *a, int n);
double min (double *a, int n);
void izbaci (double *a, int *n, int x);
double aritmeticka_sredina (double *a, int n); 
void funkcijazadatka (double *a, int *n);

int main ()
{
	double a[max];
	int n;
	upisniza(a, &n);
	funkcijazadatka(a, &n);


return 0;
}

void upisniza (double *a, int *n)
{
	do
	{
		printf("upisi broj elemenata niza\n");
		scanf("%d", n);
	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
		{
			printf("A[%d] =",i );
			scanf("%lf", &a[i]);
		}

}
void ispisniza (double *a, int n)
{
	int i;
	printf("A = [");
	for(i=0;i<n;i++)
		{
			printf("%lf",a[i]);
			if(i<n-1) printf(",");
		}
	printf("]\n");

}
double maxx (double *a, int n)
{
	int i;
	double max1=a[0];
	for(i=0;i<n;i++)
		{
			if(a[i]>max1) max1=a[i];
		}
	return max1;
}
double min (double *a, int n)
{
	int i;
	int min1=a[0];
	for(i=0;i<n;i++)
		{
			if(a[i]<min1) min1=a[i];
		}
	return min1;
}
void izbaci (double *a, int *n, int x)
{
	int i;
	for (i=x;i<*n-1;i++)
	{
		a[i]=a[i+1];
	}
	*n =*n-1;
}
double aritmeticka_sredina (double *a, int n)
{
	int i;
	int s=0;
	for(i=0;i<n;i++)
		{
			s=s+a[i];
		}
	return s/n;

}
void funkcijazadatka (double *a, int *n)
{
	int i;
	for(i=0;i<*n;i++)
	{
		if(a[i]==maxx(a,*n) || a[i]==min(a,*n))
		{
			izbaci(a,n,i);

		}

	}	
	ispisniza(a,*n);
	printf("aritmeticka sredina je %lf\n", aritmeticka_sredina(a, *n));
	funkcijazadatka (a, n);

}
