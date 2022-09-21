#include <stdio.h>

int main ()
{
	int matrizA[100][100], matrizB[100][100], matrizC[100][100],taml, tamc;
	printf ("Diga a quantidade de linhas: ");
	scanf ("%d", &taml);
	printf ("\nDiga a quantidade de colunas: ");
	scanf ("%d", &tamc);
	printf ("\n");
	for (int l=0;l<taml;l++)
		for (int c=0;c<tamc;c++)
		{
			printf ("Digite o valor da linha [%d] coluna [%d] da Matriz A: ", l, c);
			scanf ("%d", &matrizA[l][c]);
		}
	printf ("\n\n");
	for (int l=0;l<taml;l++)
		for (int c=0;c<tamc;c++)
		{
			printf ("Digite o valor da linha [%d] coluna [%d] da Matriz B: ", l, c);
			scanf ("%d", &matrizB[l][c]);
		}
	for (int l=0;l<taml;l++)
		for (int c=0;c<tamc;c++)
			matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
	printf ("\n\n");
	for (int l=0;l<taml;l++)
		for (int c=0;c<tamc;c++)
		{
			printf ("[%3d]  ", matrizC[l][c]);
			if (c == tamc-1)
				printf ("\n");
		}
	return 0;
}