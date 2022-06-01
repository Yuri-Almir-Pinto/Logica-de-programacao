#include <stdio.h>
#include <math.h>

int main ()
{
	int v1, v2, res;
	printf ("Informe o valor 1: ");
	scanf ("%d", &v1);
	printf ("Informe o valor 2: ");
	scanf ("%d", &v2);
	res = v1;
	v1 = v2;
	v2 = res;
	printf ("\nValor 1 = %d\nValor 2 = %d", v1, v2);
}