#include <stdio.h>
#include <math.h>

int main ()
{
	float a, b, c, d, MH, MQ1, MQfin;
	printf ("Informe a: ");
	scanf ("%f", &a);
	printf ("Informe b: ");
	scanf ("%f", &b);
	printf ("Informe c: ");
	scanf ("%f", &c);
	printf ("Informe d: ");
	scanf ("%f", &d);
	MH = 4/(1/a + 1/b + 1/c + 1/d);
	MQ1 = (pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2))/4;
	MQfin = sqrt (MQ1);
	printf ("\nMédia Harmônica = %f\nMédia Quadrática = %f", MH, MQfin);
	return 0;
}