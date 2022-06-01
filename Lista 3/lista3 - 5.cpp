# include <stdio.h>
# include <math.h>

int main ()
{
	float a,b,c,delta;
	printf ("Escreva a, b, e c em ordem: \n");
	scanf ("%f %f %f",&a, &b, &c);
	delta = pow(b,2) - (4*a*c);
	if (delta<0)
		printf ("A equacao nao tem solucao real.\n");
		else
			printf ("Delta = %f",delta);
	return 0;
}