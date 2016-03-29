/*upisujemo prirodan broj n, proveramo da li prost 
*izračunava za njega
* S = 1 * 2 + 2*3*4 + ... + (n+0)*(n+1)*...*(n+n) 
* i ispisujemo amstrongove cifre */

#include<stdio.h>
#include<math.h>
void upis (int *);
int S (int);
void amstrong ();
int main()
{	
	int n;
	upis(&n);
	printf("S = %d \n", S(n));
	amstrong ();
	return 0;
}
void upis (int *n)
{
	do
	{
		printf("unesite prirodan broj n \n");
		scanf("%d",n);
	} while (*n<=0);
}
int S (int n)
{
	int i,j;
	int s=0;
	int k=1;

	for(i=1;i<=n;i++)
	{	
		k=1;
		for (j=0;j<=i;j++)
			{
				k=k*(i+j);
			}
		s=s+k;
	}
	return s;
}
void amstrong ()
{
	int i,j,k;
	int br;
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				br = 100*i +10*j +k;
				if (br==pow(i,3)+pow(j,3)+pow(k,3))
					printf("%d\n", br);
			}
		}
	}
}
