/* pon: grupa 2
uneti niz jednocifrenih parnih brojeva od max 30 clavova
1. odrediti aritmeticku sredinu
2. mnoziti clanove dok god im je proizvod manji od 30 i izbaciti dokle je stigao
3. odrediti najvecu razliku izmedju dva susedna clana*/
# include<stdio.h>
#include<math.h>
#define max 30
void upis_niza(int *a, int *n);
void ispis_niza (int *a, int n);
double aritmeticka_sredina (int *a, int n);
int poslednji_pomnozen (int *a, int n);
int najveca_razlika (int *a, int n);
int main()
{
	int a[max],n;
	upis_niza(a,&n);
	ispis_niza(a,n); //ispis je samo radi provere
	printf("aritmeticka sredina je %lf\n",aritmeticka_sredina(a,n));
	if(poslednji_pomnozen(a,n)==0) printf("proizvod svih clanova niza je manji od 30\n");
	else printf("samo proizvod prvih %d je manji od 30,tj poslednji posnozen broj je indeksa %d\n",poslednji_pomnozen(a,n)+1, poslednji_pomnozen(a,n));
	printf("najveca razlika izmedju dva susedna clana je %d\n" ,najveca_razlika(a,n));
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
		do
		{
			printf("A[%d]=",i);
			scanf("%d",&a[i]);
		} while (a[i]>9 || a[i]%2!=0 || a[i]<=0);//na ovaj nacin kontrolisemo unete clanove

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
double aritmeticka_sredina(int *a, int n)
{
	int i;
	double suma=0;
	for(i=0;i<n;i++)
	{
		suma=suma+a[i];
	}
	return suma/n;
}
int poslednji_pomnozen(int *a, int n)
{
	int i=0;
	int p=1;
	for(i=0;i<n;i++)
	{
		p=p*a[i];
		if(p>=30) return i-1;
	}
	return 0;//mozemo ovako da napisemo jer je nemoguce da a[0] bude veci ili jednak 30
			//pa ako izbaci 0 znacemo da je prosao kroz sve clanove, a i dalje je p<30
}
int najveca_razlika(int *a, int n)
{
	int maxx=abs(a[0]-a[1]);//abs()=apsolutna vrednost
	int i;
	for(i=0;i<n-1;i++)
	{
		if(abs(a[i]-a[i+1])>maxx) maxx=abs(a[i]-a[i+1]);
	}
	return maxx;
}
