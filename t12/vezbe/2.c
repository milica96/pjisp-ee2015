//uneti tri cela broja, i ispisati njihovu aritmeticku, geometrijsku i harmonijsku sredinu
#include<stdio.h>
#include<math.h>
void unos (int*,int*, int*);
double ar_sredina (int,int,int);
double geo_sredina (int, int,int);
double harm_sredina(int, int,int);
int main()
{
int a,b,c;
unos(&a, &b,&c);
printf("aritmeticka sredina je %.2lf \n", ar_sredina(a,b,c));
printf("geometrijska sredina je %.2lf \n", geo_sredina(a,b,c));
printf("harmonijska sredina je %.2lf \n", harm_sredina(a,b,c));

return 0;
}
void unos(int *a,int*b,int*c)
{
	
	printf("unesite tri cela broja\n");
	scanf ("%d %d %d", a,b,c);

}
double ar_sredina(int a,int b, int c)
{
	return (double)(a+b+c)/3;
}
double geo_sredina (int a, int b, int c)
{
	return sqrt((double)a*b*c);
}
double harm_sredina (int a, int b, int c)
{
	return 3/(1/(double)a + 1/(double)b +1/(double)c);
}
