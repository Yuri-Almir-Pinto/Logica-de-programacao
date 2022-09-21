#include <stdio.h>

int main ()
{
	int i;
	do
	{
		printf ("\nEntre com um numero entre 0 e 10.\n");
		scanf ("%d", &i);
		if (i < 0 || i > 10)
		{
			printf ("\n\nNumero fora do intervalo.\n\n");
			break;
		}
	} while (1);
	return 0;
}