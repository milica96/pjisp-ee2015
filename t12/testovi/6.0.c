/*uneti trocifren broj
*ispisati sve proste koji su manji od njega
*/
#include<stdio.h>
#define min 100
#define max 999
void upis_troc_br (int *n);
int prost (int n);
int main ()
{
	int n;
	upis_troc_br(&n);
	int i;
	for (i=2; i<n; i++)
		{
			if(prost(i)) printf("%d\n",i);
		}
	return 0;
}
void upis_troc_br (int *n)
{
	do
	{
		printf("upisite trocifreni broj\n");
		scanf("%d",n);
	} while (*n<min || *n>max);

}
int prost (int n)
{
	int i;
	int br=1;
	for (i=2; i<n; i++)
		{
			if(n%i==0) br=0;

		}
	return br;
}