/*uneti dvocifren broj sa zastitom
* ispisati brojeve koji su manji od n i to oni koji su neparni i deljivi sa tri
*/
#include<stdio.h>
#define min 10
#define max 99
void upis_dvoc_br (int *n);
void ispis_neg_delj3 (int n);
int main ()
{
	int n;
	upis_dvoc_br(&n);
	ispis_neg_delj3(n);
	return 0;
}
void upis_dvoc_br (int *n)
{
	do
	{
		printf("upisite dvocifreni broj\n");
		scanf("%d",n);
	} while (*n<min || *n>max);

}
void ispis_neg_delj3 (int n)
{
	int i;
	for (i=n; i>0; i--)
		{
			if(i%2!=0 && i%3==0) printf("%d\n",i);

		}
}