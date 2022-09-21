#include <stdio.h>

int main ()
{
	int vetorA[10], vetorB[10];
	for (int i=0;i<10;i++)
	{
		printf ("Digite o valor do VetorA [%d]", i+1);
		scanf ("%d", &vetorA[i]);
		if (vetorA[i]%2 == 0)
			vetorB[i] = vetorA[i]*5;
		else if (vetorA[i]%2 != 0)
			vetorB[i] = vetorA[i]+5;
	}
	printf ("\n\n");
	for (int i=0;i<10;i++)
		printf ("VetorB %d = [%d]\n", i+1, vetorB[i]);
	return 0;
}