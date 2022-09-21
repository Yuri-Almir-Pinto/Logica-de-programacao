#include <stdio.h>

int main ()
{
	int matriz[5][5], select, swi=0, soma=0, lxc=5, procura, indice[2] = {-1, -1};
	for (int l=0;l<lxc;l++)
		for (int c=0;c<lxc;c++)
		{
			printf ("Digite o valor da linha [%d] coluna [%d]: ",l, c);
			scanf ("%d", &matriz[l][c]);
		}
	do
	{
		printf ("\n\n --- Menu --- \n\n");
		printf ("1 - Mostrar Elementos.\n");
		printf ("2 - Mostrar elementos da quarta linha e da primeira coluna.\n");
		printf ("3 - Somar diagonal.\n");
		printf ("4 - Atribuir valor zero para negativos fora da diagonal.\n");
		printf ("5 - Buscar um elemento na matriz.\n");
		printf ("6 - Sair.\n");
		scanf ("%d", &select);
		switch (select)
		{
			case 1:
				printf ("\n");
				for (int l=0;l<lxc;l++)
					for (int c=0;c<lxc;c++)
					{
						printf ("[%3d]  ", matriz[l][c]);
						if (c == lxc-1)
							printf ("\n");
					}
				break;
			case 2:
				printf ("\nQuarta linha: \n");
				for (int c=0;c<lxc;c++)
				{
					printf ("[%3d]", matriz[3][c]);
				}
				printf ("\n");
				printf ("Primeira coluna: \n");
				for (int l=0;l<lxc;l++)
				{
					printf ("[%3d]", matriz[l][0]);
				}
				printf ("\n");
				break;
			case 3:
				for (int l=0;l<lxc;l++)
					for (int c=0;c<lxc;c++)
					{
						if (l == c)
							soma += matriz[l][c];
					}
				printf ("\nSoma da diagonal: %d\n", soma);
				soma = 0;
				break;
			case 4:
				for (int l=0;l<lxc;l++)
					for (int c=0;c<lxc;c++)
						if (l != c && matriz[l][c] < 0)
							matriz[l][c] = 0;
				break;
			case 5:
				printf ("\nDigite o valor a ser procurado: ");
				scanf ("%d", &procura);
				for (int l=0;l<lxc;l++)
					for (int c=0;c<lxc;c++)
					{
						if (matriz[l][c] == procura)
						{
							indice[0] = l;
							indice[1] = c;
							break;
						}
					}
				if (indice[0] >= 0 && indice[1] >= 0)
					printf ("\n\nLocalizacao do valor:\nLinha: [%d]\nColuna: [%d]\n", indice[0], indice[1]);
				else
					printf ("Valor nao encontrado.");
				indice[0] = -1;
				indice[1] = -1;
				break;
			case 6:
				swi = -1;
				break;
		}
	} while (swi == 0);
	return 0;
}