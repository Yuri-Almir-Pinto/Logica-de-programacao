#include <stdio.h>
int main ()
{
	float dolar, real;
	printf ("Coloque a quantidade de dolar ");
	scanf ("%f", &dolar);
	real = dolar*5.13;
	printf ("Este valor, em reais, eh de %.2f", real);
	return 0;
}
