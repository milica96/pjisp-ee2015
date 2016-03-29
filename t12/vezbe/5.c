//realizovati deljenje i mnozenje pomocu oduzimanja i deljenja
#include<stdio.h>
void unos(int *, int *);
void odabiri (int *);
int pomnoziti(int, int);
int podeliti (int, int);
int main ()
{
	int a,b;
	int o;
	unos(&a, &b);
	odabiri(&o);
	switch (o)
		{
			case 1: printf("%d\n", pomnoziti(a,b) ); break;
			case 2: printf("%d\n", podeliti(a,b)); break;
		}	


	return 0;
}

void unos (int *a, int *b)
{
	printf("unesite dva broja :\n");
	scanf("%d %d", a, b);
}
void odabiri (int *o)
{
	printf("1. pomnoziti\n");
	printf("2. podeliti\n");
	printf("========================\n");
	printf("odaberite opciju\n");
	scanf("%d",o);

}
int pomnoziti (int a, int b)
{
	int i;
	int s=0;
	if (a>b) //da ne bi dzabe ako bismo imali 2 i 100, 100 puta prolazili kroz ciklus, mesto 2
	{
		for(i=0;i<b;i++) s=s+a;
	}
	else {
		for(i=0;i<a;i++) s=s+b;
	}
	return s;
}
int podeliti (int a, int b)
{
	int k=0;
	if (a>b)
	{
		while (a>=b)
		{
			a=a-b;
			k=k+1;
		}
	}
	else 	
	{
		while (b>=a)
		{
			b=b-a;
			k=k+1;
		}
	}
	return k;
	
}