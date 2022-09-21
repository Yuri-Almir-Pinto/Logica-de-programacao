#include <stdio.h>

int main ()
{
	int vetor[20], maior=-1, index, i;
	for (i=0;i<20;i++)
	{
		do
		{
			printf ("Digite o numero %d do Vetor (Apenas numeros positivos): ", i+1);
			scanf ("%d", &vetor[i]);
			if (vetor[i] >= 0)
				break;
		} while (-5);
		if (vetor[i] > maior)
		{
			maior = vetor[i];
			index = i;
		}
	}
	printf ("\nMaior elemento do Vetor: %d\n", maior);
	printf ("Indice: %d\n", index);
	return 0;
}