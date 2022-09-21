#include <stdio.h>
#include <ctype.h>

int main ()
{
	int total = 0;
	char resposta;
	float ratio, atletico = 0, coritiba = 0, foz = 0;
	do
	{
		printf ("Para que time voce torce? Digite 'A' para Atletico, 'C' para Coritiba e 'F' para Foz. Digite 'S' caso deseja sair. \n");
		scanf (" %c", &resposta);
		resposta = toupper(resposta);
		switch (resposta)
		{
			case 'A':
				atletico++;
				break;
			case 'C':
				coritiba++;
				break;
			case 'F':
				foz++;
				break;
			case 'S':
				break;
			default:
				printf ("\nResposta invalida.\n\n");
				continue;
		}
		if (resposta != 'S')
			total++;
	} while (resposta != 'S');
	printf ("Total participantes: %d \n", total);
	ratio = (atletico/total)*100;
	printf ("Total torcedores do Atletico: %.0f | %.2f%% do total\n", atletico, ratio);
	ratio = (coritiba/total)*100;
	printf ("Total torcedores de Coritiba: %.0f | %.2f%% do total\n", coritiba, ratio);
	ratio = (foz/total)*100;
	printf ("Total torcedores de Foz: %.0f | %.2f%% do total\n", foz, ratio);
	return 0;
}