#include <stdio.h>
#include <string.h>

int main ()
{
	char string1[100];
	int quanta=0;
	printf ("Digite o conteudo da string 1: \n");
	fgets (string1, sizeof(string1), stdin);
	for (int i=0,j=0;j != 1;i++)
	{
		if (string1[i] == 'a')
			quanta++;
		if (string1[i] == '\0')
			j = 1;
	}
	printf ("Quantidade de 'a's: %d", quanta);
	return 0;
}