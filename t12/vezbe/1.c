//izracunati povrsinu trougla heronovim obrascem
#include<stdio.h>
#include<math.h>
void unos (double *,double *,double *);
double povrsina (double, double, double);
int main()
{
	double a,b,c;
	unos(&a,&b,&c);
	printf("povrsina je %.2lf \n", povrsina(a,b,c));
}

void unos (double *a, double *b, double *c)
{
	do
	{
		printf("unesite tri stranice trougla\n");
		scanf ("%lf %lf %lf", a,b,c);
	} while (*a>=(*b+*c) || *b>=(*a+*c) || *c>=(*b+*a)); //to ipak moraju biti stranice trougla

}
double povrsina (double a,double b,double c)
{
	double p;
	double s=(a+b+c)/2;
	p=sqrt(s*(s-a)*(s-b)*(s-c));
	return p;
}

