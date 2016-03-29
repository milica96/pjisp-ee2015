/* upisati dva jednaka skupa skupa od max 30 elemenata 
*videti da li se sadrze jedan u drugom
*/
#include<stdio.h>
#define max 30
void upisprvogskupa (double *a, int *n);
void upisdrugogskupa(double *a, int n);
void ispisniza (double *a, int n);
void sort(double*a, int n);
int main()
{
double a[max];
double b[max];
int n;
upisprvogskupa(a, &n);
upisdrugogskupa(b,n);
sort(a,n);
sort(b,n);
ispisniza(a,n);
ispisniza(b,n);
int i;
int br =1;
for(i=0;i<n;i++)
{
	if(a[i]!=b[i])
	{
		br=0;
		printf("NISU JEDNAKI\n");
		break;
	}
}
if(br) printf("JEDNAKI SU\n");



return 0;
}

void upisprvogskupa (double *a, int *n)
{
	do
	{
		printf("upisi broj elemenata skupa\n");
		scanf("%d", n);
	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
		{
			printf("A[%d] =",i );
			scanf("%lf", &a[i]);
		}

}
void upisdrugogskupa (double *a, int n)
{
	int i;
	for(i=0;i<n;i++)
		{
			printf("B[%d] =",i );
			scanf("%lf", &a[i]);
		}
}
void ispisniza (double *a, int n)
{
	int i;
	printf("[");
	for(i=0;i<n;i++)
		{
			printf("%lf",a[i]);
			if(i<n-1) printf(",");
		}
	printf("]\n");
}
void sort (double *a, int n)
{
	int i,j;
	double b;
	for(i=0;i<n-1;i++)
	{
		for (j=i+1; j < n; j++)
		{
			if(a[j]<a[i])
			{
				b=a[j];
				a[j]=a[i];
				a[i]=b;
			}
		}
	}
}
