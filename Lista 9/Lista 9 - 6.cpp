#include <stdio.h>

int main ()
{
	float matriz[100][6], soma=0, somaq=0, media = 0;
	int qa;
	printf ("Diga a quantidade de alunos: ");
	scanf ("%d", &qa);
	for (int l=0;l<qa;l++)
	{
		printf ("Aluno %d -\n", l+1);
		for (int c=0;c<5;c++)
			{
				if (c == 0)
					matriz[l][c] = l+1;
				else if (c >= 1)
				{
					printf ("Nota %d = ", c);
					scanf ("%f", &matriz[l][c]);
					soma += matriz[l][c];
					somaq++;
					if (c == 4)
					{
						matriz[l][c+1] = soma/somaq;
						soma = 0;
						somaq = 0;
						media += matriz[l][c+1];
					}
				}
			}
	}
	printf ("\nALUNO\tNOTA1\tNOTA2\tNOTA3\tNOTA4\tMEDIA\n");
	for (int l=0;l<qa;l++)
		for (int c=0;c<6;c++)
			{
				if (c==0)
					printf ("  %.0f\t",matriz[l][c]);
				else if (c>=1)
					printf (" %.1f\t", matriz[l][c]);
				if (c==5)
					printf ("\n");
			}
	printf ("\nMEDIA GERAL ...........................: %.1f", media/qa );
	return 0;
}