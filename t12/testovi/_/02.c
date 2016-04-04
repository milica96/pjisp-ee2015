/*pon: 1. grupa
	1.zadatak
	uneti koeficijente kvadratne jednacine oblika a*x^2+bx+c=0
	ako je vrednost diskriminante veca od 0 ispisuje vrednost x1 i x2
	ako je jednaka 0 ispise x1=x2=x
	ako je manj od nule ispise vrednost diskriminante
*/
#include<stdio.h>
#include<math.h>
double D (double a, double b, double c);
void resi(double a, double b, double c, double *x1, double *x2);
int main()
{
	double a,b,c;
	do
	{
		printf("unesi koeficijente kvadratne jednacine oblika ax^2+bx+c=0\n");
		printf("a=");
		scanf("%lf", &a);
		printf("b=");
		scanf("%lf", &b);
		printf("c=");
		scanf("%lf", &c);
	} while(a==0 && b==0); //teramo korisnika da zaista unese kvadratnu jednacinu, jer ako a=b=0
							//sistem je kontradiktoran il ima beskonacno mnogo resenja
	if(D(a,b,c)<0)printf("Vrednost diskriminante je %lf\n",D(a,b,c));	
	if(D(a,b,c)>=0)
			{
				double x1,x2;
				resi(a,b,c,&x1,&x2);
				if(D(a,b,c)==0) printf("resenja su ista tj. x1=x2=%lf\n",x1);
				else printf("Resenje x1=%lf i x20%lf \n", x1,x2);
			}
	return 0;
}
double D(double a, double b, double c)
{
	return pow(b,2)-4*a*c;
}
void resi(double a, double b, double c, double *x1, double *x2)
{
	*x1=(-b+sqrt(D(a,b,c)))/(2/a);
	*x2=(-b-sqrt(D(a,b,c)))/(2/a);
}