#include <stdio.h>
#include <string.h>

int main ()
{
	char string1[100], string2[100];
	int tam;
	printf ("Digite o conteudo da string 1: ");
	fgets (string1, sizeof(string1), stdin);
	tam = strlen(string1);
	for (int i = tam-2, j=0; i>=0;i--, j++)
	{
		string2[j] = string1[i];
	}
	string1[tam-1] = '\n';
	string1[tam] = '\0';
	printf ("Inversao da string 1: %s", string2);
	return 0;
}