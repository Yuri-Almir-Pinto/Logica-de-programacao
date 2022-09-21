#include <stdio.h>
#include <string.h>

int main ()
{
	char string1[100], string2[100];
	int comp;
	printf ("Digite o conteudo da string 1: \n");
	fgets (string1, sizeof(string1), stdin);
	printf ("Digite o conteudo da string 2: \n");
	fgets (string2, sizeof(string2), stdin);
	comp = strcmp (string1, string2);
	printf ("Compracao: %d", comp);
	return 0;
}