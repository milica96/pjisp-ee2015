/* treba uneti dva niza i proveriti da li se jedan sadrzi u drugom u obrnutom rasporedu
*/
#include<stdio.h>
#define max 30
void upisniza (int *a, int *n);
void ispisniza (int *a, int n);
int main()
{
int a[max];
int na;
int b[max];
int nb;
upisniza(a, &na);
upisniza(b, &nb);
int i,j,k;
int s=0;
if (na>nb)
{
	for(i=0;i<na-nb;i++)
		{
			if(a[i]==b[nb-1])
				{
					for(j=i,k=nb-1;k>=0;j++,k--)
						{
							if(a[j]!=b[k]) 
								{
									s=0; 
									break;
								}
							else s=1;
						}
				}		
		}
}
else 
{
	for(i=0;i<nb-na;i++)
		{
			if(b[i]==a[na-1])
				{
					for(j=i,k=na-1;k>=0;j++,k--)
						{
							if(b[j]!=a[k])
								{
									s=0; 
									break;
								}
							else s=1;
						}
				}		
		}
}
ispisniza(a, na);
ispisniza(b, nb);
if(s) printf("jedan niz se sadzi u drugom u obrlunom rasporedu\n");
else printf("ne sadrzi se\n");

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
			printf("T[%d] =",i );
			scanf("%d", &a[i]);
		}

}
void ispisniza (int *a, int n)
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