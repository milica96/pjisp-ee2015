//resiti jednacinu oblika ax+b=0 za sve slucajeve
#include<stdio.h>
#include<math.h>
void unos (double*,double*);
int main()
{
double a,b;
unos(&a, &b);
 // resava jendacinu 
if (a==0 && b==0) printf("PRVI STEPEN NEODREDJENOSTI\n");
if (a==0 && b!=0) printf("SISTEM JE KONTRADIKTORAN\n");
if (a!=0 && b==0) printf("X=0\n");
if (a!=0 && b!=0) printf("X=%lf\n", -b/a);
return 0;
}
void unos(double *a,double*b)
{
	
	printf("unesiti koeficijente jednacine A * x + B = 0 \n");
	scanf ("%lf %lf", a,b);

}
