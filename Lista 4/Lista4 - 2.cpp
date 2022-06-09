#include <stdio.h>

int main ()
{
	int dia;
	printf ("Digite um numero de dia da semana: ");
	scanf ("%i", &dia);
	
	switch (dia)
	{
		case 1:
			printf ("\nEh domingo.");
			break;
		case 2:
			printf ("\nEh segunda-feira.");
			break;
		case 3:
			printf ("\nEh terca-feira.");
			break;
		case 4:
			printf ("\nEh quarta-feira.");
			break;
		case 5:
			printf ("\nEh quinta-feira.");
			break;
		case 6:
			printf ("\nEh sexta-feira.");
			break;
		case 7:
			printf ("\nEh sabado.");
			break;
		default:
			printf ("Numero invalido.");
	}
	return 0;
}