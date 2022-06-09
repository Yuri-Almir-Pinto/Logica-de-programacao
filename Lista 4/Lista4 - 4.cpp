#include <stdio.h>

int main ()
{
	int mes, ano;
	printf ("Informe o mes (1-12): ");
	scanf ("%i", &mes);
	
	switch (mes)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf ("Este mes possui 31 dias.");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf ("Este mes possui 30 dias.");
			break;
		case 2:
			printf ("Informe o ano: ");
			scanf ("%i", &ano);
			if ( (ano%100) == 0 && (ano%400) != 0)
				printf ("Este mes possui 28 dias.");
			else if ( (ano%100) != 0 && (ano%400) == 0)
				printf ("Este mes possui 29 dias.");
			else if ( (ano%4) == 0)
				printf ("Este mes possui 29 dias.");
			else
				printf ("Este mes possui 28 dias.");
			break;
		default:
			printf ("Mes invalido.");
	}
	return 0;
}