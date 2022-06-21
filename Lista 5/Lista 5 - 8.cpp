#include <stdio.h>

int main ()
{
	int i = 1, quant = -2;
	printf ("P.G. = ( ");
	while (i <= 10)
	{
		printf ("%d ", quant);
		quant *= (-2);
		i++;
	}
	printf (")");
	return 0;
}