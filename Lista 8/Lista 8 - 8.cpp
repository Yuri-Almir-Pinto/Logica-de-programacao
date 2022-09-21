#include <stdio.h>

int main ()
{
	int vetorA[10], vetorB[10], i, id=0;
	for (i=0;i<10;i++)
	{
		printf ("Digite o valor do vetorA [%d]: ", i+1);
		scanf ("%d", &vetorA[i]);
	}
	printf ("\n");
	for (i=9;i>-1;i--)
	{
		vetorB[id] = vetorA[i];
		printf ("VetorB [%d]: %d\n", id+1, vetorB[id]);
		id++;
	}
	
	return 0;
}