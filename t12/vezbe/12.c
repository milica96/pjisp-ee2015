/* upisi pravougaonu matricu realnih brojeva
* i poredjaj kolone po neopadajucem redosledu zbiru po kolonama
*/
#include<stdio.h>
#define max 100
void upismatrice (int (*)[max], int *);
void ispismatrice (int (*)[max], int);
void sort (int (*)[max], int);
int main()
{
int a[max][max];
int n;
upismatrice(a, &n);
ispismatrice (a, n);
sort(a, n);
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
void sort (int (*a)[max], int n)
{
int s[max];
int x=0;
int b;
int i, j,k;
for (j=0;j<n;j++)
{	
	x=0;
	for (i=0;i<n;i++)
	{
		x=x+a[i][j];
	}
	s[j]=x;
}
for(i=0;i<n;i++)
{
	for (j=i;j<n;j++)
	{
		if (s[j]<s[i])
		{
		
			//zameni vrednosti kolona koje su u nizu
			b=s[i];
			s[i]=s[j];
			s[j]=b;
			
			for (k=0;k<n;k++)
			{
				b=a[k][i];
				a[k][i]=a[k][j];
				a[k][j]=b;
			}


		}

	}

}
}


