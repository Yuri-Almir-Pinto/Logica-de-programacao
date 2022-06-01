#include <stdio.h>

int main ()
{
	int cod1, quant1, cod2, quant2;
	float val1, val2, valfin1, valfin2, valfinfin;
	printf ("Informe o código, quantidade, e custo da primeira peça a ser vendida, respectivamente: ");
	scanf ("%d %d %f", &cod1, &quant1, &val1);
	printf ("Informe o código, quantidade, e custo da segunda peça a ser vendida, respectivamente: ");
	scanf ("%d %d %f", &cod2, &quant2, &val2);
	valfin1 = quant1 * val1;
	valfin2 = quant2 * val2;
	valfinfin = valfin1 + valfin2;
	printf ("VALOR A PAGAR: R$ %.2f", valfinfin);
	return 0;
}