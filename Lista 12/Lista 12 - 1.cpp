#include <stdio.h>

int fatorialSoma (int n)
{
	int result = (n * (n+1))/2;
	return result;
}

int main ()
{
	int n = 0, result = 0;
	printf ("Digite o numero que voce quer somar de todos os seus naturais anteriores: ");
	scanf ("%d", &n);
	result = fatorialSoma(n);
	printf ("\nA soma eh: %d", result);
	return 0;
}