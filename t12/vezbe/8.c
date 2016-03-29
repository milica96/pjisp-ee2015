/* upisati niz double x [25], i char y[80], sortirati ih i ispisati
*uneti prirodan broj q i odrediti koliko se on puta pojavljuje u x[25]
*naci max vrednost x[25]
*od x[25] napraviti dva niza a[25], b[25], stim da su u a brojevi veci od 5 a u b negativni
*od niza y formirati niz c u kom se nalaze samo slova */
#include<stdio.h>
#define max 25
#define maxc 80
void upis_d (double *, int *);
void upis_c (char *, int *);
void sort_d (double *, int );
void sort_c (char *, int);
int pojavljivanje (double *, int, double);
double maxx (double *, int);
void AB (double *, int, double *, int*, double *, int*);
void C (char *, int, char *, int *);
void ispis (double *, int);
void ispisc (char *, int);
int main ()
{
	int n, nc;
	double x[max];
	double q;
	char y[maxc];
	double a[max],b[max];
	int na, nb;
	char c[maxc];
	int ncc;
	upis_d(x,&n);
	upis_c(y, &nc);
	sort_d(x, n);
	sort_c(c, nc);
	ispis(x, n);
	ispisc(y, nc);
	printf("\n");
	printf("unesite q: \n");
	scanf("%lf", &q);
	printf("broj %lf se pojavljuje u nizu X %d puta \n", q, pojavljivanje(x, n,q));
	printf("najveci broj u nizu x je %lf \n", maxx(x, n) );
	AB (x,n,a, &na, b, &nb);
	ispis(a, na);
	ispis(b, nb);
	C (y, nc, c, &ncc);
	ispisc(c, ncc);


return 0;
}
// upis niza tipa double 
void upis_d (double *x, int *n)
{
	 do
	 {
	 	printf("upisite broj clanova niza double X :\n");
	 	scanf("%d",n);
	 } while (*n<=0 || *n>max);
	 
	 int i;
	 for(i=0; i<*n;i++)
	 {
	 	printf("X[%d] = ", i);
	 	scanf ("%lf", &x[i]);
	 }
}
// upis niza tipa char
void upis_c (char *y, int *nc)
{
	 do
	 {
	 	printf("upisite broj clanova niza char Y :\n");
	 	scanf("%d",nc);
	 } while (*nc<=0 || *nc>maxc);
	 
	 int i;
	 for(i=0; i<*nc;i++)
	 {
	 	printf("Y[%d] =", i);
	 	scanf (" %c", &y[i]);
	 }
}
// sortiranje niza double uzlaznom putanjom
void sort_d (double *x,int n)
{
	int i, j;
	double b;
	for(i=0;i<n-1;i++)
	{
		for (j=i;j<n;j++)
		{
			if (x[j]<x[i])
			{
				b=x[i];
				x[i]=x[j];
				x[j]=b;
			}
		}
	}

}
//sortiranje niza char
void sort_c (char *y,int nc)
{
	int i, j;
	char b;
	for(i=0;i<nc-1;i++)
	{
		for (j=i;j<nc;j++)
		{
			if (y[j]<y[i])
			{
				b=y[i];
				y[i]=y[j];
				y[j]=b;
			}
		}
	}
}
// ispis niza double
void ispis(double *x, int n) 
{
	int i;
	printf("X=[");
	for (i=0; i < n; i++)
		{
			printf("%lf ", x[i]);
			if (i!=n-1) printf(",");
		}
	printf("]");
}
//ispis niza char
void ispisc (char *y, int nc)
{
	int i;
	printf("Y=[");
	for (i=0; i <nc; i++)
		{
			printf("%c", y[i]);
			if (i!=nc-1) printf(","); 
		}
	printf("]");
}

int pojavljivanje (double *x, int n, double q)
{
	int i;
	int s=0;
	for (i=0;i<n;i++)
	{
		if (x[i]==q) s++;
	}

	return s;
}
double maxx (double *x, int n)
{
	int i;
	double max1 = x[0];
	for (i=0;i<n;i++)
	{
		if (x[i]> max1) max1=x[i];
	}
	return max1;
}
void AB (double *x, int n, double *a, int *na, double *b, int *nb)
{
	*na=0;
	*nb=0;
	int i;
	for(i=0;i<n;i++)
	{
		if (x[i]>5)
		{
			a[*na]=x[i]; 
			(*na)++;
		} 
		if (x[i]<0)
		{
			b[*nb]=x[i]; 
			(*nb)++;
		} 

	}

}
void C (char *y, int nc, char *c, int *ncc)
{
	*ncc=0;
	int i;
	for(i=0;i<nc;i++)
	{
		if ((y[i]>='a'&& y[i]<='z')|| (y[i]>='A'&& y[i]<='Y'))
		{
			c[*ncc]=y[i]; 
			(*ncc)++;
		} 
	}

}
