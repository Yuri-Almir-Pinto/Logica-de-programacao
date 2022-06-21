#include <stdio.h>

int main ()
{
	int i = 1, quant = 0;
	printf ("P.A. = ( ");
	while (i <= 20)
	{
		printf ("%d ", quant);
		quant += 3;
		i++;
	}
	printf (")");
	return 0;
}