#include <stdio.h>
#include <math.h>

int main ()
{
	float num, qua, cub;
	printf ("Informe um número: ");
	scanf ("%f", &num);
	qua = pow (num,2);
	cub = pow (num,3);
	printf ("\nnúmero\t\tquadrado\tcubo\n%.2f\t\t%.2f\t\t%.2f", num, qua, cub);
	return 0;
}