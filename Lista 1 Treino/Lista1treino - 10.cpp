#include <stdio.h>

int main ()
{
	float disp, consl, consm;
	printf ("Informe a distância percorrida no total, em km: ");
	scanf ("%f", &disp);
	printf ("Informe o consumo de combustível em litros: ");
	scanf ("%f", &consl);
	consm = disp / consl;
	printf ("%.3f km/l", consm);
	return 0;
}