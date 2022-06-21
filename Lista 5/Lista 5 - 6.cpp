#include <stdio.h>

int main ()
{
	int i = 1, x, n = 0;
	float soma;
	while (i <= 15)
	{
		printf ("Digite um numero. (%d)\n", i);
		scanf ("%d", &x);
		if (x > 10)
		{
			soma += x;
			n++;
		}
		i++;
	}
	printf ("Media dos maiores de 10 = %.2f\n", (soma/n));
	return 0;
}