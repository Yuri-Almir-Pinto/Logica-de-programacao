#include <stdio.h>

int main ()
{
	float resultado, A, i, dois = 1;
	for (i=1 ; i<= 25 ; i++)
	{
		resultado = dois/i;
		A += resultado;
		dois += 2;
	}
	printf ("A soma eh: %f", A);
	return 0;
}