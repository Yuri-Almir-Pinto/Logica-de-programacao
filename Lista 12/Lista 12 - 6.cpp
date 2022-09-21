#include <stdio.h>
#define PI 3.14

float areaCirculo (float raio)
{
	float area = PI * (raio*raio);
	return area;
}

float areaRetangulo (float comp, float larg)
{
	float area = comp * larg;
	return area;
}

float areaTriangulo (float base, float altura)
{
	float area = (base*altura)/2;
	return area;
}

int main ()
{
	int sel;
	float areaCirc = 0, raio = 0, comp = 0, larg = 0, areaRet = 0, base = 0, altura = 0, areaTri = 0;
	printf ("Digite qual calculo deseja efetuar: \n");
	printf ("1 - Area Circulo\n");
	printf ("2 - Area Retangulo\n");
	printf ("3 - Area Triangulo\n");
	scanf ("%d", &sel);
	switch (sel)
	{
		case 1:
			printf ("\nDigite o raio da circunferencia: ");
			scanf ("%f", &raio);
			areaCirc = areaCirculo(raio);
			printf ("Area da circunferencia: %.2f", areaCirc);
			break;
		case 2:
			printf ("Digite o comprimento do retangulo: ");
			scanf ("%f", &comp);
			printf ("Digite a largura do retangulo: ");
			scanf ("%f", &larg);
			areaRet = areaRetangulo(comp, larg);
			printf ("Area do retangulo: %.2f", areaRet);
			break;
		case 3:
			printf ("Digite o tamanho da base: ");
			scanf ("%f", &base);
			printf ("Digite o tamanho da altura: ");
			scanf ("%f", &altura);
			areaTri = areaTriangulo(base, altura);
			printf ("Area do triangulo: %.2f", areaTri);
			break;
		default:
			printf ("Opcao inexistente");
	}
}