#include <stdio.h>
#include <string.h>

int main ()
{
	char string1[100], selecao;
	int quanta=0;
	printf ("Digite a letra a ser procurada: \n");
	scanf ("%c", &selecao);
	printf ("Digite o conteudo da string 1: \n");
	fflush (stdin);
	fgets (string1, sizeof(string1), stdin);
	for (int i=0,j=0;j != 1;i++)
	{
		if (string1[i] == selecao)
			quanta++;
		if (string1[i] == '\0')
			j = 1;
	}
	printf ("Quantidade de '%c's: %d",selecao, quanta);
	return 0;
}