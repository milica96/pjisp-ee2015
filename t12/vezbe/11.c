/*
* Napisati program koji učitava matricu A 
* 1. ispisuje sumu elemenata koji se na sporednoj dijagonali matrice.
* 2. ispisuje sumu elemenata koji se nalaze ispod glavne dijagonale matrice.
* 3. transponuje matricu
*/
//OCIGLEDNO JE DA MATRICA MORA BITI KVADRATNA	
#include<stdio.h>
#define max 100
void upismatrice (int (*)[max], int *);
int s_sporednadijagonala (int (*)[max], int);
int s_sporednadijagonala_ispod (int (*)[max], int);
void ispismatrice (int(*)[max], int);
void transponuj (int (*)[max], int);
int main()
{
int a[max][max];
int n;
upismatrice (a, &n);
printf("%d \n", s_sporednadijagonala(a, n));
printf("%d\n", s_sporednadijagonala_ispod (a,n));
ispismatrice (a, n);
transponuj (a, n);
ispismatrice (a, n);
return 0;
}
void upismatrice (int (*a)[max], int *n)
{
do
{
	printf("upisi dimenziju kvadratne matrice\n");
	scanf ("%d",n);
} while (*n<=0 || *n>max);

int i, j;
for(i=0;i<*n;i++)
{
	for(j=0;j<*n;j++)
	{
		printf("A[%d][%d] = ",i, j);
		scanf("%d", &a[i][j]);
	}
}

}
void ispismatrice (int (*a)[max], int n)
{

	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}

}
int s_sporednadijagonala (int (*a)[max], int n)
{
	int s=0;
	int i, j;
	for(i=0;i<n;i++)
	{
		s=s+a[i][n-1-i];
	}
	return s;

}
int s_sporednadijagonala_ispod (int (*a)[max], int n)
{
	int s=0;
	int i, j;
	for(i=0;i<n;i++)
	{
		for (j = n-1; j>i; j--)
		{
			s=s+a[i][j];
		}
	}
	return s;

}
void transponuj (int (*a)[max], int n)
{

	int i, j;
	int b;
	for(i=0;i<n;i++)
	{
		for (j = 0; j<i; j++)
		{
			b=a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = b;
		}
	}
}

