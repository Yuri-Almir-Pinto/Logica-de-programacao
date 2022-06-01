#include <stdio.h>

int main ()
{
	float a;
	printf ("Digite um numero\n");
	scanf ("%f", &a);
	if (a==0)
		printf ("O numero eh nulo");
			else if (a>0)
			printf ("O numero eh positivo");
				else if (a<0)
				printf ("O numero eh negativo");
	return 0;
}