#include <stdio.h>
#include <math.h>

int main ()
{
	float x, resultado;
	printf ("Informe um número: ");
	scanf ("%f", &x);
	resultado = sqrt (x);
	printf ("A raiz quadrada deste número é: %f", resultado);
	return 0;
}