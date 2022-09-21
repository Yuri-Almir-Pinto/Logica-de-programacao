#include <stdio.h>
#include <math.h>

int Bhaskara (int a, int b, int c)
{
	int delta = 0, result = 0;
	double x1 = 0, x2 = 0;
	delta = (b*b) - 4 * a * c;
	
	if  (delta > 0)
	result = 2;
	else if (delta == 0)
	result = 1;
	else if (delta < 0)
	result = 0;
	return result;
}
int main ()
{
	int a = 0, b = 0, c = 0, result = 0;
	printf ("Digite o valor de 'a': ");
	scanf ("%d", &a);
	printf ("Digite o valor de 'b': ");
	scanf ("%d", &b);
	printf ("Digite o valor de 'c': ");
	scanf ("%d", &c);
	printf ("Equacao formada: %dx^2 + %dx + %d = 0", a,b,c);
	result = Bhaskara(a,b,c);
	printf ("\nQuantidade de raizes reais: %d", result);
}