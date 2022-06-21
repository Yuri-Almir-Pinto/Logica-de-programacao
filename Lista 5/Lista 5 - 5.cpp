#include <stdio.h>

int main ()
{
	int i = 1;
	while (i <= 10)
	{
		printf ("Numero = %d | Numero ao quadrado = %d | Numero ao cubo = %d\n", i, i*i, i*i*i);
		i++;
	}
	return 0;
}