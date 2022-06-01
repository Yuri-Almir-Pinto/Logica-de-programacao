#include <stdio.h>
#include <math.h>

int main ()
{
	float fixo, vendas, final;
	printf ("Informe o salário fixo do vendedor: ");
	scanf ("%f", &fixo);
	printf ("Agora informe a quantidade vendida, em reais, pelo vendedor: ");
	scanf ("%f", &vendas);
	final = (vendas * 0.15) + fixo;
	printf ("O salário fixo de seu vendedor é %.2f. O salário final do mesmo é %.2f reais.", fixo, final);
	return 0;
}