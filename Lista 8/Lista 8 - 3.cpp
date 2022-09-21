#include <stdio.h>

int main ()
{
	int n, x[100], y[100], i, soma=0;
	printf ("Digite quantos elementos voce quer que cada vetor possua: ");
	scanf ("%d", &n);
	printf ("Agora, digite %d elementos para o vetor X: \n", n);
	for (i=0; i<n; i++)
	{
		printf ("Vetor X [%d]: ", i+1);
		scanf ("%d",&x[i]);
	}
	printf ("Digite %d elementos para o vetor Y: \n", n);
	for (i=0; i<n; i++)
	{
		printf ("Vetor Y [%d]: ", i+1);
		scanf ("%d",&y[i]);
	}
	for (i=0; i<n; i++)
		soma += x[i]*y[i];
	printf ("Produto escalar: %d\n", soma);
	return 0;
}