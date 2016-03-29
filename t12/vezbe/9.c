// napisati program koji zamenjuje mesta elemenata niza 
// ubacuje elemenat u niz 
// vrsi fuziju nizova
// ubacuje niz u drugi niz
#include<stdio.h>
#define max 100
void upis (int *, int *);
void ispis (int *, int);
void zamena (int *, int);
void ubacivanjeelementa (int *, int*, int *, int *);
void ubacivanjeniza (int *, int*, int*, int, int*);
void fuzija1 (int *, int, int*, int, int*, int*);
void fuzija2 (int *, int *, int*, int);
int main()
{
	int A[max], B[max];
	int na, nb;
	upis(A, &na);
	upis(B, &nb);
	zamena(A, na);
	zamena (B, nb);
	ispis(A, na);
	ispis(B, nb);
	int q; //elemenat koji ubacujemo
	int x; //mesto na koje ga ubacujemo
	ubacivanjeelementa (A, &na, &q, &x);
	ispis(A, na);

	int C[max], nc;
	fuzija1 (A, na, B, nb, C, &nc);
	fuzija2 (A, &na, B, nb);
	ispis(C, nc);
	ispis(A, na);
	ispis(B, nb);
	ubacivanjeniza (B, &nb, A,  na, &x);
	ispis(B, nb);

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
void zamena (int *a, int n)
{
	int i, j;
	int z;
	for (i=0, j=n-1;i<j;i++,j--)
	{
		z=a[i];
		a[i]=a[j];
		a[j]=z;

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
void ubacivanjeelementa (int *a, int *n, int *q, int *x)
{
	printf("unesite broj koji zelite da ubacite\n");
	scanf("%d",q);
	do
	{
		printf("upisite na koje mesto niza zelite da ubacite element \n");
		scanf("%d",x);
	} while (*x<0 || *x>*n);
	
	int i;
	for(i=*n-1;i>=*x;i--) a[i+1]=a[i];
	*n = *n +1;
	a[*x] = *q;

}
void ubacivanjeniza (int *a, int*na, int*b, int nb, int*x)
{
	do
	{
		printf("upisite na koje mesto niza zelite da ubacite niz \n");
		scanf("%d",x);
	} while (*x<0 || *x>*na);
	
	int i;
	for(i=*na-1;i>=*x;i--) a[i+nb]=a[i];
	
	for(i=0;i<nb;i++) a[i+*x]=b[i];
	*na = *na +nb;
}
void fuzija1 (int *a, int na, int*b, int nb, int*c, int*nc)
{
		*nc = na+nb;
		int i;
		for (i=0;i<na;i++)
		{	
			c[i]=a[i];
		}
		for (i=0;i<nb;i++)
		{	
			c[i+na]=b[i];
		}
}
void fuzija2 (int *a, int *na, int*b, int nb)
{	int i;
	for (i=0;i<nb;i++)
		{	
			a[*na +i]=b[i];
		}
	*na = *na + nb;
}

