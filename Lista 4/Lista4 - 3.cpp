#include <stdio.h>

int main ()
{
	int mes;
	printf ("Informe o numero do mes: ");
	scanf ("%i", &mes);
	
	switch (mes)
	{
		case 1:
		case 2:
		case 3:
			printf ("Eh o primeiro trimestre.");
			break;
		case 4:
		case 5:
		case 6:
			printf ("Eh o segundo trimestre.");
			break;
		case 7:
		case 8:
		case 9:
			printf ("Eh o terceiro trimestre.");
			break;
		case 10:
		case 11:
		case 12:
			printf ("Eh o quarto trimestre.");
			break;
		default:
			printf ("Mes invalido.");
	}
	return 0;
}