/*uneti celobrojni niz od 20 elemenata
* dobiti broj elemenata niza koji predhode prvom negativnom elementu
* ukoliko je taj broj elemeata veci od n/3 onda svaki drugi element niza uvecati duplo
* i na kraju treba da se ispise niz */
#include<stdio.h>
#define max 20
void upisniza (int *a, int *n);
int br_el_pre_neg (int *a, int n);
void uvecaj_svakidrugi (int *a, int n);
void ispis (int *a, int n);
int main()
{
int n;
int a[max];
upisniza (a, &n);
if(br_el_pre_neg(a,n)>n/3) uvecaj_svakidrugi (a,n);
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
int br_el_pre_neg (int *a, int n)
{
	int i;
	int br=0;
	for(i=0;i<n;i++)
		{
			if(a[i]%2!=0) 
				{
					br=i; 
					break;
				}
		}
 	return br;
}
void uvecaj_svakidrugi (int *a, int  n)
{
	int i;
	for(i=0;i<n;i=i+2)
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

