// izbacuje odredjeni broj elemenata niza od zadatog pocetnog mesta
// izbacuje elemente iz niza po nekom kriterijumu
#include<stdio.h>
#define max 100
void upis (int *, int *);
void ispis (int *, int);
void izbacivanjeelementa (int *, int*, int );
int main()
{
	int A[max];
	int na,x;
	upis(A, &na);
	do
	{
		printf("upisite sa kog mesta zelite da izbacite element \n");
		scanf("%d",&x);
	} while (x<0 || x>na);
	izbacivanjeelementa(A, &na, x);
	ispis(A, na);
	int i;
	//izbacujemo parne brojeve
	for (i = 0; i <na; i++)
	{
		if (A[i]%2==0) izbacivanjeelementa(A, &na, i);
	}
	ispis(A, na);

return 0; 
}
void upis (int *a, int *n)
{
	do
	{	
		printf("broj clanova niza:\n");
		scanf("%d",n);

	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
	{
		printf("X[%d] = ", i);
		scanf("%d", &a[i]);
	}

}
void ispis (int *a, int n)
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
void izbacivanjeelementa (int *a, int*n, int x)
{
	int i;
	for(i=x;i<*n;i++) a[i]=a[i+1];
	*n = *n -1;
}