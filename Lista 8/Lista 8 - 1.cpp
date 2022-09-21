# include <stdio.h>

int main ()
{
	int vetorA[5], vetorB[5], i;
	for (i=0;i<5;i++)
	{
		printf ("Digite o valor do VetorA %d: ", i+1);
		scanf ("%d", &vetorA[i]);
		vetorA[i] *= 2;
		vetorB[i] = vetorA[i];
	}
	printf ("\n\n");
	for (i=0;i<5;i++)
	{
		printf ("VetorB %d = %d\n", i+1, vetorB[i]);
	}
	return 0;
}