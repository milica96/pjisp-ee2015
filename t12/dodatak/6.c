/*formirati niz tako da se upisuju samo CELI POZITIVNI BROJEVI U NERASTUCEM PORETKU
*i onda ga ispisati*/
#include<stdio.h>
#define max 20
void upis(int *a, int *n);
void ispis (int *a, int n);
int nepojavljujese(int *a, int n, int x);
int najmanjije(int *a, int n, int x);
int main()
{
	int a[max];
	int n;
	upis(a, &n);
	return 0;
}
void upis (int *a, int*n)
{	
	*n=1;
	do 
	{
		int x;
		printf("a[%d] =", *n -1);
		scanf ("%d", &x);
		if(x%2!=0) { printf("greska\n"); break;}
		if(*n==1) a[*n-1] = x;
		else
		{
			if (nepojavljujese(a, *n, x) && najmanjije(a, *n,x)) a[*n-1] = x;
		}
		*n=*n+1;

	}
	while (1);
	if(*n==1) printf("greska\n");
	else ispis(a, *n -1);
}
int nepojavljujese(int *a, int n, int x)
{
	int i;
	int br=1;
	for(i=0;i<n;i++)
	{
		if(a[i]==x) br=0;
	}
	return br;
}
int najmanjije(int *a, int n, int x)
{
	int i;
	int br=1;
	if(a[n-1]<=x) br=0;
	return br;
}
void ispis (int *a, int n)
{
	int i;
	printf("C = [");
	for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			if(i<n-1) printf(",");
		}
	printf("]\n");

}

