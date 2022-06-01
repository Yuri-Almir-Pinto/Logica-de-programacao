#include <stdio.h>

int main ()
{
	int a;
	float b;
	printf ("Digite um numero:\n");
	scanf ("%d",&a);
	b = a%3;
	if (b==0)
	printf ("Esse numero eh multiplo de tres.");
		else
		printf ("Esse numero nao eh multiplo de tres.");
	return 0;
}