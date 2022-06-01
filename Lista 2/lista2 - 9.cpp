#include <stdio.h>
#include <math.h>

int main ()
{
	float real, cima, baixo;
	printf ("Digite um número real com vírgula: ");
	scanf ("%f", &real);
	cima = ceil(real);
	baixo = floor(real);
	printf ("%f arredondado para cima fica %.0f, e para baixo fica %.0f", real, cima, baixo);
	return 0;
}