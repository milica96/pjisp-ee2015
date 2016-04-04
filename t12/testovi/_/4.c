/*ucitati max 20 clanova, naci srednju vrednost, od svakog clana niza 
oduzeti srednju vrednost, potom to sto smo dobili kvadrirati i napraviti novi niz
naci srednju vrednost novog niza i naci koren te srednje vrednosti*/
#include<stdio.h>
#include<math.h>
#define max 20
void upis_niza(double *a, int *n);
void ispis_niza(double *a, int n);
void kopiraj_niz(double *a, double *b, int n);
double srednja_vrednost (double *a, int n);
void oduzmi_od_svakog_clana (double *a, int n, double x);
void kvadriraj_svaki_clan (double *a, int n);
int main()
{
    double a[max];
    int n;
    upis_niza(a,&n);
    ispis_niza(a, n);
    printf("srednja vrednost niza je %lf\n",srednja_vrednost(a,n));
    oduzmi_od_svakog_clana(a,n,srednja_vrednost(a,n));
    kvadriraj_svaki_clan(a,n);
    double b[max];
    kopiraj_niz(a,b,n);
    ispis_niza(b,n);
    printf("srednja vrednost niza je %lf\n",srednja_vrednost(b,n));
    printf("koren srednje vrednosti niza je %lf\n",sqrt(srednja_vrednost(b,n)));
    return 0;
}
void upis_niza(double *a, int *n)
{
	do{
		printf("unesite broj clanova\n");
		scanf("%d", n);
		}while (*n<=0 || *n>max);
	int i;
	for(i=0;i<*n;i++)
	{
		printf("A[%d]=",i);
		scanf("%lf",&a[i]);
	}
}
void ispis_niza(double *a, int n)
{
    int i;
    printf("X=[");
    for(i=0;i<n;i++)
    {
        printf(" %lf", a[i]);
        if(i!=n-1) printf(",");
    }
    printf("]\n");

}
double srednja_vrednost (double *a, int n)
{
    int i;
    double suma=0;
    for(i=0;i<n;i++)
    {
        suma+=a[i];    
    }
    return suma/n;
}
void oduzmi_od_svakog_clana (double *a, int n, double x)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=a[i]-x;    
    }
}
void kvadriraj_svaki_clan (double *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i]*=a[i];    
    }
}
void kopiraj_niz(double *a, double *b, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }  

}
