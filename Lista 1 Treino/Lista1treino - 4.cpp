#include <stdio.h>

int main ()
{
	int A, B, Prod;
	printf ("Fala ai sua variável A, boya: ");
	scanf ("%d", &A);
	printf ("Agora fala a sua variável B: ");
	scanf ("%d", &B);
	Prod = A * B;
	printf ("PROD = %d", Prod);
	return 0;
}