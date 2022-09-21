#include <stdio.h>

int main ()
{
	int i, ini, fin, inteposquant=0, intepos=0, impares=0, pares=0, imparesquant=0, paresquant=0, impediv=0, impedivquant=0;
	printf ("Digite o numero inicial: \n");
	scanf ("%d", &ini);
	printf ("Digite o numero final: \n");
	scanf ("%d", &fin);
	for (i=ini ; i<=fin ; i++)
	{
		if (i>0)
		{
			inteposquant++;
			intepos = intepos + i;
		}
		if (i%2 == 0)
		{
			pares += i;
			paresquant++;
		}
		if (i%2 != 0)
		{
			impares += i;
			imparesquant++;
		}
		if (i%2 != 0 && i%3 == 0 && i%4 == 0 && i != 0)
		{
			impediv += i;
			impedivquant++;
		}
	}
	printf ("Quantidade de numeros inteiros e positivos: %d\n", inteposquant);
	printf ("Quantidade de numeros pares: %d\n",paresquant);
	printf ("Quantidade de numeros impares: %d\n", imparesquant);
	printf ("Quantidade de numeros impares e divisiveis por 3 e 4: %d\n", impedivquant);
	printf ("Media dos inteiros e positivos: %f\n", (float) (intepos/inteposquant));
	printf ("Media dos pares: %f\n", (float) (pares/paresquant));
	printf ("Media dos impares: %f\n", (float) (impares/imparesquant));
	if (impedivquant > 0)
		printf ("Media dos impares e divisiveis por 3 e 4: %f\n", (float) (impediv/impedivquant));
	else
		printf ("Erro: Nao ha media de impares e divisiveis por 3 e 4.");
	return 0;
}