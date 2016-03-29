/* unos kvadratne matrice max dimenzija 10 min 3
* 
* ako brojeva u matrici koji su deljivi sa 3 ima vise od dimenzije n
* ispisi novu matricu iste dimezije takvu da su iznad dijagonale 1 ispod 0
* u suprotnom 2 ispod 0 */
#include<stdio.h>
#define min 3
#define max 10
void upismatrice (int a[][max], int *n);
int brojneparnih (int a[][max], int n);
void ispismatrice (int a[][max], int n);
int main()
{
	int a[max][max];
	int n;
	int i,j;
	upismatrice(a, &n);
	int c[max][max];
	if (brojneparnih(a,n)>n)
		{
		for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if(j>i) c[i][j]=1;
					else c[i][j]=0;
				}
			}
		}
	else 
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if(j>i) c[i][j]=2;
					else c[i][j]=0;
				}
			}
		}
	ispismatrice(c, n);

return 0;
}

void upismatrice (int a[][max], int *n)
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
			scanf("%d", &a[i][j]);
		}
	}

}
int brojneparnih (int a[][max], int n)
{
	int i;
	int j;
	int br =0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if(a[i][j]%3==0) br++;
		}
	}
	return br;
}
void ispismatrice (int a[][max], int n)
{
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("  %d  ",a[i][j]);
		}
		printf("\n");
	}
}