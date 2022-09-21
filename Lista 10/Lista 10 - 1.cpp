#include <stdio.h>
#include <string.h>

int main ()
{
	char string1[100], string2[100];
	printf ("Digite o conteudo da string 1: \n");
	fgets (string1, sizeof(string1), stdin);
	printf ("Digite o conteudo da string 2: \n");
	fgets (string2, sizeof(string2), stdin);
	for (int i=0, j=0; j != 1;i++)
	{
		if (string1[i] == '\n')
		{
			string1[i] = '\0';
			j = 1;
		}
	}
	strcat (string1, string2);
	printf ("String 1: %s", string1);
	printf ("String 2: %s", string2);
	return 0;
}