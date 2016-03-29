/*upisati broj deonica
*uneti niz koji predstavnja brzine na svakoj od deonica
* uneti drugi niza sa vremenima koja su potrebna da se predje svaka deonica
*izracunati prosecnu brzinu na putu
*izracunati ukupnu duzinu puta */
#include<stdio.h>
#define max 100
void upisbrzina (double *a, int *n);
void upisvremena (double *a, int n);
double suma (double *a, int n);
int main ()
{
	double v[max];
	double p[max];
	int n;
	double t[max];
	upisbrzina (v, &n);
	upisvremena(t, n);
	int i;
	for(i=0; i<n;i++)
		{
			p[i] =v[i]*t[i];
		}
	printf("duzina puta je %lf\n", suma(p,n));
	printf("prosecna brzina je %lf\n", suma(p,n)/suma(t,n));
return 0;
}

void upisbrzina (double *a, int *n)
{
	do
	{
		printf("upisi broj deonica\n");
		scanf("%d", n);
	} while (*n<=0 || *n>max);
	int i;
	printf("brzine po deonicama:\n");
	for(i=0;i<*n;i++)
		{
			printf("v[%d] =",i );
			scanf("%lf", &a[i]);
		}

}
void upisvremena (double *a, int n)
{
	int i;
	printf("vremena po deonicama\n");
	for(i=0;i<n;i++)
		{
			printf("t[%d] =",i );
			scanf("%lf", &a[i]);
		}

}

double suma (double *a, int n)
{
	int i;
	int s=0;
	for(i=0;i<n;i++)
		{
			s=s+a[i];
		}
	return s;
}