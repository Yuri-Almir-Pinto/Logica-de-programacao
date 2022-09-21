#include <stdio.h>
#include <string.h>

int main ()
{
	char string1[100], string2[100], string3[100], stringr[100], tamanho1, tamanho2, tamanho3;
	printf ("Digite o conteudo da string 1: \n");
	fgets (string1, sizeof(string1), stdin);
	printf ("Digite o conteudo da string 2: \n");
	fgets (string2, sizeof(string2), stdin);
	for (int i=0, j=0, l=0; j != 1 && l != 1;i++)
	{
		if (string1[i] == '\n')
		{
			string1[i] = ' ';
			j = 1;
		}
	}
	for (int i=0, j=0; j != 1;i++)
	{
		if (string2[i] == '\n')
		{
			string2[i] = ' ';
			j = 1;
		}
	}
	strcpy (stringr, string1);
	strcat (string1, string2);
	strcpy (string3, string1);
	strcpy (string1, stringr);
	tamanho1 = strlen (string1);
	tamanho2 = strlen (string2);
	tamanho3 = strlen (string3);
	printf ("String 1: %s\n", string1);
	printf ("String 2: %s\n", string2);
	printf ("String 3: %s\n", string3);
	printf ("Tamanho 1: %d\n", tamanho1-1);
	printf ("Tamanho 2: %d\n", tamanho2-1);
	printf ("Tamanho 3: %d\n", tamanho3-1);
	return 0;
}