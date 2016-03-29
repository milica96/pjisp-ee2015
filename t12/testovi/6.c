/* uneti niz od max 30 elemenata 
*naci broj suseda sa istom vrednoscu
*ako je taj broj manji od n/2 uvecati svaki treci clan niza 2 puta
*a ukoliko je manji ili jednak izracunati sumu elemenata sa neparnim ideksima
*/
#include<stdio.h>
#define max 30
void upisniza (int *a, int *n);
int susedi (int *a, int n);
void uvecaj_svakitreci (int *a, int n);
void ispis (int *a, int n);
int suma_neg_ind (int *a, int n);
int main()
{
int n;
int a[max];
upisniza (a, &n);
if(susedi(a,n)>n/2) uvecaj_svakitreci (a,n);
else printf("suma elemenata sa neparnim indeksima je %d\n", suma_neg_ind(a,n));
ispis (a, n);

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
			printf("A[%d] =",i );
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
void uvecaj_svakitreci (int *a, int  n)
{
	int i;
	for(i=0;i<n;i=i+3)
		{
			a[i]=2*a[i];
		}

}
void ispis (int *a, int n)
{
	int i;
	printf("A = [");
	for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			if(i<n-1) printf(",");
		}
	printf("]\n");

}
int suma_neg_ind (int *a, int n)
{
	int i;
	int s=0;
	for(i=1;i<n;i=i+2)
		{
			s=s+a[i];
		}
	return s;
}
