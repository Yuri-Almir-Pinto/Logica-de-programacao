#include <stdio.h>

int main ()
{
	int vetor[20], menor=2147483647, maior=-1, index, indexmaior, i;
	for (i=0;i<20;i++)
	{
		do
		{
			printf ("Digite o numero %d do Vetor (Apenas numeros positivos): ", i+1);
			scanf ("%d", &vetor[i]);
			if (vetor[i] >= 0)
				break;
		} while (1);
		if (vetor[i] < menor)
		{
			menor = vetor[i];
			index = i;
		}
		if (vetor[i] > maior)
		{
			maior = vetor [i];
			indexmaior = i;
		}
	}
	printf ("\nMenor elemento do Vetor: %d\n", menor);
	printf ("Indice: %d\n", index);
	printf ("\nMaior elemento do Vetor: %d\n", maior);
	printf ("Indice: %d\n", indexmaior);
	return 0;
}