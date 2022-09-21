#include <stdio.h>
#include <ctype.h>

int main ()
{
	char genero, olhos, cabelos;
	int idade, idadeME = 1000, especifico1 = 0, especifico2 = 0, i = 1;
	while (i <= 50)
	{
		do
		{
			printf ("\nGenero: M (Masculino) e F (Feminino) - ");
			scanf (" %c", &genero);
			genero = toupper(genero);
			if (genero != 'M' && genero != 'F')
				printf ("\nResposta invalida.");
		} while (genero != 'M' && genero != 'F');
		do
		{
			printf ("\nCor do olhos: A (Azuis), V (Verdes), P (Pretos) e C (Castanhos) - ");
			scanf (" %c", &olhos);
			olhos = toupper(olhos);
			if (olhos != 'A' && olhos != 'V' && olhos != 'P' && olhos != 'C')
				printf ("\nResposta invalida.");
		} while (olhos != 'A' && olhos != 'V' && olhos != 'P' && olhos != 'C');
		do
		{
			printf ("\nCor dos cabelos: L (Louros), C (Castanhos) e P (Pretos) - ");
			scanf (" %c", &cabelos);
			cabelos = toupper(cabelos);
			if (cabelos != 'L' && cabelos != 'C' && cabelos != 'P')
				printf ("\nResposta invalida.");
		} while (cabelos != 'L' && cabelos != 'C' && cabelos != 'P');
		do
		{
			printf ("\nidade - ");
			scanf ("%d", &idade);
			if (idade < 0)
				printf ("\nResposta invalida.");
		} while (idade < 0);
		if (idadeME > idade)
			idadeME = idade;
		if (genero == 'M' && idade >= 16 && idade <= 24 && olhos == 'A' && cabelos == 'C')
			especifico1++;
		if (genero == 'F' && idade < 40 && olhos == 'P' && cabelos == 'P')
			especifico2++;
		i++;
	}
	printf ("\n\n Menor idade do grupo: %d", idadeME);
	printf ("\n Individuos do sexo masculino, cuja idade esta entre 16 e 24 anos e que tenham olhos azuis e cabelos castanhos: %d", especifico1);
	printf ("\n Individuos do sexo femenino, cuja idade seja menor que 40 anos e que tenham olhos e cabelos pretos: %d", especifico2);
	return 0;
}