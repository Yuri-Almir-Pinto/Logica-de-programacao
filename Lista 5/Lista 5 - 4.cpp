#include <stdio.h>

 int main ()
 {
 	int i = 1, p = 0, soman = 0, somap = 0, x;
 	printf ("Digite ate qual numero voce quer: \n");
 	scanf ("%d", &x);
 	if (x >= 0)
 	{
 		while ( i <= x)
 		{
		soman += i;
		i += 2;
		}
		while ( p <= x)
 		{
		somap += p;
		p += 2;
		}
		printf ("A soma dos impares eh de = %d\n", soman);
		printf ("A soma dos pares eh de = %d", somap);
	}
	else if (x < 0)
		printf ("Numero invalido.");
	return 0;
}