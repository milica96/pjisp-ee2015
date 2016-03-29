/* upisati dva niza nax duzine X i Y, oni treba da prestave koordinate tacaka
*oni se generisu rendom u opsegu od 0.0 do 1.0
*nakon toga se izbacuju sve one tacke tj komponenete x i y iz odgovarajucih nizova ako se tacka ne nalazi
* u L(0,1)
*na kraju ispisati odgovarajuce tacke
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define max 30
#define maxx 1.0
void upisxkoordinate (double *a, int *n);
void upisykoordinate (double *a, int n);
void ispistacaka (double *a, double *b, int n);
void izbaci(double *a, int *n, int x);
int main ()

{	
	srand(time(NULL));
	double a[max], b[max];
	int n;
	upisxkoordinate(a, &n);
	upisykoordinate(b, n);
	int i;
	for (i=0;i<n;i++)
	{
		if(sqrt(pow(a[i],2)+pow(b[i],2))>maxx) 
		{
			izbaci(a, &n, i);
			izbaci(b, &n, i);
		}
	}
	ispistacaka(a,b,n);	
return 0;
}
void upisxkoordinate (double *a, int *n)
{
	do
	{
		printf("upisi broj elemenata niza\n");
		scanf("%d", n);
	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
		{
			a[i] = (double)(rand() % 10000)/10000;
		}

}
void upisykoordinate (double *a, int n)
{

	int i;
	for(i=0;i<n;i++)
		{
			a[i] = (double)(rand() % 10000)/10000;
		}

}
void ispistacaka (double *a, double *b, int n)
{	
	printf("[ ");
	int i;
	for(i=0;i<n;i++)
		{
			printf(" (%lf, %lf) ",a[i],b[i]);
		}
	printf(" ]");
	printf("\n");

}
void izbaci (double *a, int *n, int x)
{
	int i;
	for(i=x;i<*n-1;i++)
		{
			a[i]=a[i+1];
		}
	*n = *n -1;

}
