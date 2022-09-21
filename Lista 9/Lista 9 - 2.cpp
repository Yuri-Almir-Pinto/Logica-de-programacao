#include <stdio.h>

int main ()
{
	float matriz[3][3];
	int resp;
	for (int l=0;l<3;l++)
		for (int c=0;c<3;c++)
		{
			printf ("Digite um numero para a posicao [%d] [%d]: ", l+1,c+1);
			scanf ("%f", &matriz[l][c]);
		}
	printf ("Digite a linha que deseja visualizar (1, 2 ou 3): ");
	scanf ("%d", &resp);
	switch (resp)
	{
		case 1:
			for (int l=0;l<3;l++)
				printf ("\nLinha [1] = %f", matriz[0][l]);
			break;
		case 2:
			for (int l=0;l<3;l++)
				printf ("\nLinha [2] = %f", matriz[1][l]);
			break;
		case 3:
			for (int l=0;l<3;l++)
				printf ("\nLinha [3] = %f", matriz[2][l]);
			break;
		default:
			printf ("Valor invalido.\n\n");
	}
	return 0;
}