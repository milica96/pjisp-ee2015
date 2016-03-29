/* uneti dva niza 
* proveriti da li se jedan moze dobiti rotacijom drugog tj.kao fora translacijom za par mest
* npr 12345
* i 34512*/
#include<stdio.h>
#define max 30
void upisniza (int *a, int *n);
void ispisniza (int *a, int n);
void provera (int *a, int na, int *b, int nb, int *s);
int main()
{
	int a[max];
	int na;
	int b[max];
	int nb;
	upisniza(a, &na);
	upisniza(b, &nb);
	int s=0;
	if (na>nb) provera(a, na, b, nb, &s);
	else provera(b, nb, a, na, &s);

	ispisniza(a, na);
	ispisniza(b, nb);
	if(s) printf("jedan niz se sadzi u drugom \n");
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
void provera (int *a, int na, int *b, int nb, int *s)
{
	int i,j,k;
	for(i=0;i<na;i++)
		{
			if(a[i]==b[0])
				{
					if (na-i>=nb)
						{	
							for(j=i,k=0;k<nb;j++,k++)
							{
								if(a[j]!=b[k])
									{
										*s=0; 
										break;
									}
								else *s=1;
							}

						}
					else 
					{	
						int x=0;
						for(j=i,k=0;j<na;j++,k++)
							{	
								x++;
								if(a[j]!=b[k])
									{
										*s=0; 
										break;
									}
								else *s=1;
							}

						for(j=0,k=x;k<nb;j++,k++)
							{
								if(a[j]!=b[k])
									{
										*s=0; 
										break;
									}
								else *s=1;
							}
					}
				}		
		}
}
