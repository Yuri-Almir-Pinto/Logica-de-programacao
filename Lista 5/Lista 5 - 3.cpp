#include <stdio.h>

 int main ()
 {
 	int i = 1, soma = 0;
 	while ( i <= 100)
 	{
		soma += i;
		i += 2;
	}
	printf ("Soma = %d\n", soma);
	return 0;
 } 