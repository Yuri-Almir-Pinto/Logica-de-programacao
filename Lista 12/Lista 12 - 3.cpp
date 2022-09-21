#include <stdio.h>
#define PI 3.14

float areaCirc (float raio)
{
	float area = 0;
	area = PI * (raio*raio);
	return area;
}

int main ()
{
	float raio = 0, resultado = 0;
	printf ("Digite o raio da circunferencia: ");
	scanf ("%f", &raio);
	resultado = areaCirc(raio);
	printf ("Area da circunferencia: %.2f", resultado);
	return 0;
}