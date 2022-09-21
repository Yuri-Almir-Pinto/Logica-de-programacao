#include <stdio.h>

int main ()
{
	int i, quant, numero;
	printf ("Escolha o numero a ser multiplicado:\n");
	scanf ("%d", &numero);
	printf ("Escolha a quantidade de vezes:\n");
	scanf ("%d", &quant);
	for (i=1 ; i<= quant ; i++)
		printf ("%d x %d = %d\n", numero, i, (i*numero));
	return 0;
}