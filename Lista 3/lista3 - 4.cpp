# include <stdio.h>
# include <ctype.h>

int main ()
{
	char estado;
	printf ("Informe seu estado civil [ S - Solteiro | C - Casado | D - Divorciado | V - Viuvo]\n");
	scanf ("%c",&estado);
	estado = toupper(estado);
	if (estado=='S')
	printf ("Solteiro");
		else if (estado=='C')
		printf ("Casado");
			else if (estado=='D')
			printf ("Divorciado");
				else if (estado=='V')
				printf ("Viuvo");
	return 0;
}