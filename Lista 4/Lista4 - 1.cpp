#include <stdio.h>
#include <ctype.h>

int main ()
{
	char carteira;
	printf ("Digite o tipo da sua carteira: ");
	scanf (" %c", &carteira);
	carteira = toupper(carteira);

	switch (carteira)
	{
		case 'A':
			printf ("\nVoce pode dirigir motos.");
			break;
		case 'B':
			printf("\nVoce pode dirigir Carros.");
			break;
		case 'C':
			printf ("\nVoce pode dirigir Caminhoes.");
			break;
		case 'D':
			printf ("\nVoce pode dirigir Onibus.");
			break;
		case 'E':
			printf ("\nVoce pode dirigir Carretas.");
			break;
		default:
			printf ("Tipo invalido.");
	}
	return 0;
}