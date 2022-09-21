#include <stdio.h>

int main ()
{
	float max= -2147483647, min= 2147483647, medn, med, num;
	int i;
	for (i=1 ; i<=5 ; i++)
	{
		printf ("Digite um numero real: \n");
		scanf ("%f", &num);
		if (num > max)
			max = num;
		if (num < min)
			min = num;
		if (num > 5.9)
		{
			med += num;
			medn++;
		}
	}
	printf ("\n\nMaior numero: %f", max);
	printf ("\nMenor numero: %f", min);
	if (medn > 0)
	printf ("\nMedia dos numeros maiores que 5,9: %f", (med/medn));
	else
	printf ("\nNao ha numeros maiores que 5,9.");
	return 0;
}