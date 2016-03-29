//racunati sumu n prirodnih brojeva, n je zadato na pocetku
#include<stdio.h>
#include<math.h>
void unos (int*);
int sumawhile (int);
int sumafor (int);
int main()
{
int a;
unos(&a);
printf("suma prvih prirodnih brojeva do n je %d \n", sumawhile(a) );
printf("suma prvih prirodnih brojeva do n je %d \n", sumafor(a) );
return 0;
}
void unos(int *a)
{
	
	do
	{
		printf("unesiti prirodan broj \n");
		scanf ("%d", a);

	} while (*a<=0);
}
int sumawhile (int a)
{
	int s=0;
	int i=0;
	while(i<=a)
	{
		s=s+i;
		i++;
	}
	return s;

}
int sumafor (int a)
{
	int s=0;
	int i;
	for(i=0;i<=a;i++)
	{
		s=s+i;
	}
	return s;

}