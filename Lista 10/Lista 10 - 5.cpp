#include <stdio.h>
#include <string.h>

int main ()
{
	char string1[100];
	printf ("Digite o conteudo da string 1: ");
	fgets (string1, sizeof(string1), stdin);
	for (int i=0, j=0;j != 1;i++)
	{
		if (string1[i] >= 97 && string1[i] <= 122)
		{
			string1[i] -= 32;
		}
		if (string1[i] == '\n' || string1[i] == '\0')
			j = 1;
	}
	printf ("String em maiusculo: %s", string1);
	return 0;
}