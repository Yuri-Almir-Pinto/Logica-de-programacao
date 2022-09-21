#include <stdio.h>

float areaRet (float comp, float larg)
{
	float area = comp * larg;
	return area;
}
int main ()
{
	float comp = 0, larg = 0, result = 0;
	printf ("Digite o comprimento do retangulo: ");
	scanf ("%f", &comp);
	printf ("Digite a largura do retangulo: ");
	scanf ("%f", &larg);
	result = areaRet(comp, larg);
	printf ("Area do retangulo: %.2f", result);
	return 0;
}