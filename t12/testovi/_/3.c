/* pon merenje i regulacija //delimicna varijacija na temu u cilju pokrivanja svih slucajeva sta je moglo biti
1. uneti niz, izracunati aritmeticku sredinu i proveriti da li je sortiran i ispisi ga, ako nije ti ga sortiraj, pa ga ponovo ispisi*/
# include<stdio.h>
#define max 100
void upis_niza(int *a, int *n);
void ispis_niza (int *a, int n);
double aritmeticka_sredina_parnih (int *a, int n);
int da_li_sort_neopadajuce(int *a, int n);
int da_li_sort_nerastuce(int *a, int n);
void sort_nerastuce (int *a, int n);
void sort_neopadajuce (int *a, int n);
int main()
{
	int a[max],n;
	upis_niza(a,&n);
	printf("aritmeticka sredina parnih brojeva u nizu je %lf\n",aritmeticka_sredina_parnih(a,n));
	ispis_niza(a,n); 
	if(da_li_sort_nerastuce(a,n) || da_li_sort_neopadajuce(a,n)) printf("niz je vec sortiran\n");
	else 
	{
		printf("niz nije sortiran, moracemo ga sortirati\n");
		sort_neopadajuce(a,n);
		ispis_niza(a,n);
		printf("ili\n");
		sort_nerastuce(a,n);
		ispis_niza(a,n);
	} 
	return 0;
	}

void upis_niza(int *a, int *n)
{	
	do
	{	
		printf("broj clanova niza:\n");
		scanf("%d",n);

	} while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void ispis_niza (int *a, int n)
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
double aritmeticka_sredina_parnih(int *a, int n)
{
	int i;
	double suma=0;
	int k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0) 
		{
			suma=suma+a[i];
			k++;
		}
	}
	return suma/k;
}
void sort_neopadajuce(int *a, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
}
void sort_nerastuce(int *a, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
}
int da_li_sort_neopadajuce(int *a, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				return 0;
			}
		}
	}
	return 1;
}
int da_li_sort_nerastuce(int *a, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				return 0;
			}
		}
	}
	return 1;
}