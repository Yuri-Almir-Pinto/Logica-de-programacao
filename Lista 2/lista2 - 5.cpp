#include <stdio.h>
#include <math.h>

int main ()
{
	float valor, prestacoes;
	printf ("Insira o valor da sua compra: ");
	scanf ("%f", &valor);
	prestacoes = valor/5;
	printf ("\nCompra Parcelada\n5 x %.2f = %.2f",prestacoes, valor);
	return 0;
}