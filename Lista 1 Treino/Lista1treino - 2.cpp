#include <stdio.h>

int main ()
{
	double area, raio;
	printf ("Fala ae boy, qual o valor do raio do circulo, com até duas casas decimais após a virgula? ");
	scanf ("%lf", &raio);
	area = 3.14159 * (raio * raio);
	printf ("A = %.10f", area);
	return 0;
}