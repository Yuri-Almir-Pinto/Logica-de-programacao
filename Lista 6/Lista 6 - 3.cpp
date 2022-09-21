#include <stdio.h>
#include <ctype.h>

int main ()
{
	int idade, medn = 0, homens = 0, maior = 0, menor = 1000, i = 1;
	float med;
	char gen;
	while (i <= 10)
	{
		do
		{
			printf ("Idade (%d)", i);
			scanf ("%d", &idade);
			if (idade < 0)
				printf ("\nResposta invalida.\n\n");
		} while (idade < 0);
		do
		{
		printf ("Genero [F ou M] (%d)", i);
		scanf (" %c", &gen);
		gen = toupper(gen);
		if (gen != 'F' && gen != 'M')
			printf ("\nResposta invalida.\n\n");
		} while (gen != 'F' && gen != 'M');
		if (idade > maior)
			maior = idade;
		if (idade < menor)
			menor = idade;
		if (gen == 'F')
		{
			med += idade;
			medn++;
		}
		if (gen == 'M')
			homens++;
		i++;
	}
	printf ("\nMaior idade do grupo: %d", maior);
	printf ("\nMenor idade do grupo: %d", menor);
	printf ("\nMedia da idade das mulheres: %.2f", (med/medn));
	printf ("\nNumero  de homens: %d", homens);
	return 0;
}