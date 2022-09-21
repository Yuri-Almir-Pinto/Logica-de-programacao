#include <stdio.h>
#include <ctype.h>

int main ()
{
	int i = 1;
	float notaA, notaB;
	char resposta;
	do
	{
		printf ("Aluno %d \n", i);
		printf ("Entre com a nota A: ");
		scanf ("%f", &notaA);
		printf ("Entre com a nota B: ");
		scanf ("%f", &notaB);
		printf ("Media do aluno %d = %.1f \n", i, (notaA + (notaB*2))/3);
		do
		{
			printf ("Continuar [S ou N] ? ");
			scanf (" %c", &resposta);
			resposta = toupper(resposta);
			if (resposta != 'S' && resposta != 'N')
				printf ("ERRO: Resposta invalida.\n");
		} while (resposta != 'N' && resposta != 'S');
		i++;
	} while (resposta == 'S');
	return 0;
}