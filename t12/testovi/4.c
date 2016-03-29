/* unos kvadratne matrice max dimenzija 10 min 2 znakovnog tipa
* 
* ako ima vise velikih od malih slova
* ispisi novu matricu iste dimezije takvu da su iznad dijagonale '*' ispod '#'
* u suprotnom '+' ispod '#' */
#include<stdio.h>
#define min 3
#define max 10
void upismatrice (char a[][max], int *n);
int brojvelikih (char a[][max], int n);
int brojmalih(char a[][max], int n);
void ispismatrice (char a[][max], int n);
int main()
{
	char a[max][max];
	int n;
	int i,j;
	upismatrice(a, &n);
	char c[max][max];
	//pravimo novu matricu c i u nju upisujemo *, #, +
	//i tek onda je ispisujemo
	if (brojvelikih(a,n)>brojmalih(a,n))
		{
		for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if(j>i) c[i][j]='*';
					else c[i][j]='#';
				}
			}
		}
	else 
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if(j>i) c[i][j]='+';
					else c[i][j]='#';
				}
			}
		}
	ispismatrice(c, n);
	//samo ispisujemo karaktere +,*,# bez da ih svrstavamo u matricu

if (brojvelikih(a,n)>brojmalih(a,n))
		{
		for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if(j>i) printf("  *  ");
					else printf("  #  ");
				}
				printf("\n");
			}
		}
	else 
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if(j>i) printf("  +  ");
					else printf("  #  ");
				}
				printf("\n");
			}
		}

	return 0;
}

void upismatrice (char a[][max], int *n)
{
	do
	{
		printf("upisite dimenziju matrice\n");
		scanf("%d",n);
	} while (*n<min || *n>max);
	int i;
	int j;
	for (i = 0; i < *n; i++)
	{
		for (j = 0; j < *n; j++)
		{
			printf("A[%d][%d] = ", i, j);
			scanf(" %c", &a[i][j]);
		}
	}

}
int brojvelikih (char a[][max], int n)
{
	int i;
	int j;
	int br =0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if(a[i][j]>='A' && a[i][j]<='Z') br++;
		}
	}
	return br;
}

int brojmalih (char a[][max], int n)
{
	int i;
	int j;
	int br =0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if(a[i][j]>='a' && a[i][j]<='z') br++;
		}
	}
	return br;
}

void ispismatrice (char a[][max], int n)
{
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("  %c  ",a[i][j]);
		}
		printf("\n");
	}
}