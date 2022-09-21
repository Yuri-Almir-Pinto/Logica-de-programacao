#include <stdio.h>

int main ()
{
	int matriz[8][8], maior=-2147483648, menor=2147483647, ind1[2], ind2[2];
	for (int l=0;l<8;l++)
		for (int c=0;c<8;c++)
		{
			printf ("Digite um numero inteiro para a posicao [%d] [%d]: ", l,c);
			scanf ("%d", &matriz[l][c]);
			if (matriz[l][c] > maior)
			{
				maior = matriz[l][c];
				ind1[0] = l;
				ind1[1] = c;
			}
			if (matriz[l][c] < menor)
			{
				menor = matriz[l][c];
				ind2[0] = l;
				ind2[1] = c;
			}
		}
	printf ("\nMaior valor = %d\n",maior);
	printf ("Linha = [%d]\n",ind1[0]);
	printf ("Coluna = [%d]\n\n\n",ind1[1]);
	printf ("Menor valor = %d\n",menor);
	printf ("Linha = [%d]\n",ind2[0]);
	printf ("Coluna = [%d]\n\n",ind2[1]);
	return 0;
}