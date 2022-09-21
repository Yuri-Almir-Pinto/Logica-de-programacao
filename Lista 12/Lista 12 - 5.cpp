#include <stdio.h>

float areaTri (float base, float altura)
{
	float area = (base*altura)/2;
	return area;
}
int main ()
{
	float base = 0, altura = 0, area = 0;
	printf ("Digite o tamanho da base: ");
	scanf ("%f", &base);
	printf ("Digite o tamanho da altura: ");
	scanf ("%f", &altura);
	area = areaTri(base, altura);
	printf ("Area do triangulo: %.2f", area);
	return 0;
}