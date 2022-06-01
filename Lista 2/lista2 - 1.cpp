#include <stdio.h>
#include <math.h>

int main ()
{
	float valor, pago, troco;
	printf ("Insira o valor pago: ");
	scanf ("%f", &pago);
	printf ("Agora insira o valor do produto: ");
	scanf ("%f", &valor);
	troco = pago - valor;
	printf ("Seu troco é de %.2f", troco);
	return 0;
}