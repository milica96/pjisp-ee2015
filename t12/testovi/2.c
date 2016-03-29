/* uneti kvadratnu matricu dimenzije max 10 
* napraviti niz a[3] tako da mu je prvi clan niza zbir svih parnih elemenata matrice
*drugi proizvod neparnih elemenata iznad dijagonale i 
*treci razlika najveceg i najmanjeg elementa matrice */
#include<stdio.h>
#define max 100
void upismatrice (int a[][max], int *n);
int zbir_parnih (int a[][max], int n);
int proizvod_nep_iznad_dij (int a[][max], int n);
double maxx_min (int a[][max], int n);
void ispisniza (double *a, int n);
int main()
{
int a[max][max];
int n;
double b[max];
upismatrice(a, &n);
b[0]=(double)zbir_parnih(a, n);
b[1]=(double)proizvod_nep_iznad_dij(a,n);
b[2]=maxx_min(a,n);
ispisniza(b,3);
return 0;
}




void upismatrice (int a[][max], int *n)
{
	do
	{
		printf("unesite dimenziju matrice\n");
		scanf("%d", n);
	} while (*n<=0 || *n>max);
	int i, j;
	for (i=0;i<*n;i++)
	{

		for(j=0;j<*n;j++)
		{

			printf("A[%d][%d] =",i, j);
			scanf ("%d", &a[i][j]);
		}
	}

}
int zbir_parnih (int a[][max], int n)
{
	int i, j;
	int s=0;
	for (i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
		{

			if(a[i][j]%2==0) s=s+a[i][j];
		}
	}
	return s;
}
int proizvod_nep_iznad_dij (int a[][max], int n)
{
	int i, j;
	int p=1;;
	for (i=0;i<n;i++)
	{

		for(j=n-1;j>i;j--)
		{

			if(a[i][j]%2!=0) p=p*a[i][j];
		}
	}
	return p;
}
double maxx_min (int a[][max], int n)
{
	int i, j;
	int maxx=a[0][0];
	int min =a[0][0];
	for (i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
		{

			if(a[i][j]>maxx) maxx = a[i][j];
		}
	}
	for (i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
		{

			if(a[i][j]<min) min = a[i][j];
		}
	}
	return (double)(maxx+min)/2;
}
void ispisniza (double *a, int n)
{
	printf("[");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%lf", a[i]);
		if (i!=n-1) printf(",");
	}
	printf("]");
	printf("\n");
}
