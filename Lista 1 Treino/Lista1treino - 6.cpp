#include <stdio.h>

int main ()
{
	float A, B, C, Media;
	printf ("Digita a nota A do(a) meliante ae: ");
	scanf ("%f", &A);
	printf ("Agora a nota B: ");
	scanf ("%f", &B);
	printf ("E por fim a C: ");
	scanf ("%f", &C);
	Media = (A*2 + B*3 + C*5)/10;
	printf ("MEDIA = %.1f", Media);
	return 0;
}