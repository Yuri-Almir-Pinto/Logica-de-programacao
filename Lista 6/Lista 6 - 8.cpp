#include <stdio.h>
#include <ctype.h>

int main ()
{
	float peso, pesoMA, pesoME = 10000;
	int idade, idadeMA, idadeME = 1000;
	char genero, resposta;
	do
	{
		printf ("Digite o genero [F ou M]: \n");
		scanf (" %c", &genero);
		genero = toupper(genero);
		if (genero != 'F' && genero != 'M')
		{
			printf ("Resposta invalida.\n");
			continue;
		}
		do
		{
			printf ("Digite a idade: \n");
			scanf ("%d", &idade);
			if (idade < 0)
				printf ("Resposta invalida.\n");
		} while (idade < 0);
		do
		{
			printf ("Digite o peso: \n");
			scanf ("%f", &peso);
			if (peso <= 0)
				printf ("Resposta invalida.\n");
		} while (peso <= 0);
		if (peso >= pesoMA)
			pesoMA = peso;
		if (peso <= pesoME)
			pesoME = peso;
		if (genero == 'F' && idade <= idadeME)
			idadeME = idade;
		if (genero == 'M' && idade >= idadeMA)
			idadeMA = idade;
		do
		{
		printf ("Deseja continuar [S ou N] ?\n");
		scanf (" %c", &resposta);
		resposta = toupper(resposta);
		if (resposta != 'S' && resposta != 'N')
			printf ("Resposta invalida.\n");
		} while (resposta != 'S' && resposta != 'N');
			
	} while (resposta != 'N');
	printf ("Pessoa mais gorda: %.2fKg\n", pesoMA);
	printf ("Pessoa mais magra: %.2fKg\n", pesoME);
	printf ("Mulher mais nova: %d anos\n", idadeME);
	printf ("Homem mais velho: %d anos\n", idadeMA);
	return 0;
}