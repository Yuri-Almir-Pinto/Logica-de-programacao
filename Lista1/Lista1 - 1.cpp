#include <stdio.h>
int main ()
{
	int valorA, valorB, resultadoA, resultadoS, resultadoM;
	float resultadoD;
	printf ("Escreve ai um valor inteiro de A ");
	scanf ("%d", &valorA);
	printf ("Agora escreve ai um valor inteiro de B ");
	scanf ("%d", &valorB);
	resultadoA = valorA + valorB;
	resultadoS = valorA - valorB;
	resultadoM = valorA * valorB;
	resultadoD = (float) valorA / valorB;
	printf (" Soma = %d\n Subtracao = %d\n Multiplicacao = %d\n Divisao = %.2f", resultadoA, resultadoS, resultadoM, resultadoD);
	return 0;
}
