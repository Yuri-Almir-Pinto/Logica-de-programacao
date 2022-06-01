#include <stdio.h>

int main ()
{
	int A,B,C,D,Diferenca;
	printf ("De o valor de A: ");
	scanf ("%d", &A);
	printf ("De o valor de B: ");
	scanf ("%d", &B);
	printf ("De o valor de C: ");
	scanf ("%d", &C);
	printf ("De o valor de D: ");
	scanf ("%d", &D);
	Diferenca = (A * B - C * D);
	printf ("DIFERENCA = %d", Diferenca);
	return 0;
}