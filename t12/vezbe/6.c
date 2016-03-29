/*unos prirodnog broja N i q sa zastitom
*racunanje faktorijela N
*ispis svih brojeva koji su manji od N i deljivi sa q */
#include<stdio.h>
void unos (int *, int*);
int faktorijel (int);
void br_delj (int, int);
int main()
{
	int n, q;
	unos(&n, &q);
	printf("faktorijel N je %d \n", faktorijel(n) );
	br_delj(n, q);
	return 0;
}
void unos (int *n, int *q)
{
	do
	{
		printf("unesite dva prirodna broja :\n");
		scanf ("%d %d", n, q);
	} while (*n<=0 || *q<=0);

}
int faktorijel (int n)
{
	int i;
	int k=1;
	for(i=1;i<=n;i++) k=k*i;
	return k;
}
void br_delj(int n, int q)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(i%q==0) printf("%d\n", i);
	}


}