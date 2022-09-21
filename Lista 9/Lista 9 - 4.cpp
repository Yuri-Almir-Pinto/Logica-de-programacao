#include <stdio.h>

int main ()
{
	int matrizA[3][4];
	for (int l=0;l<3;l++)
		for (int c=0;c<4;c++)
		{
			printf ("Digite o valor da linha [%d] coluna [%d]: ", l, c);
			scanf ("%d", &matrizA[l][c]);
		}
	printf ("\n");
	for (int l=0;l<4;l++)
		for (int c=0;c<3;c++)
		{
			printf ("[%3d]  ", matrizA[c][l]);
			if (c == 2)
				printf ("\n");
		}
	return 0;
}