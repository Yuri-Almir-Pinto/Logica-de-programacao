#include <stdio.h>

int main ()
{
	float nota, ConA, ConB, ConC, ConD, ConE;
	int ConAquant = 0, ConBquant = 0, ConCquant = 0, ConDquant = 0, ConEquant = 0, i, waste;
	for (i=1 ; i <= 40 ; i++)
	{
		printf ("Digite a nota final do aluno: \n");
		scanf ("%f", &nota);
		printf ("Digite o codigo do aluno: \n");
		scanf ("%d", &waste);
		if (nota >= 0 && nota < 3)
		{
			ConE += nota;
			ConEquant++;
		}
		else if (nota >= 3 && nota < 5)
		{
			ConD += nota;
			ConDquant++;
		}
		else if (nota >= 5 && nota< 7)
		{
			ConC += nota;
			ConCquant++;
		}
		else if (nota >= 7 && nota < 9)
		{
			ConB += nota;
			ConBquant++;
		}
		else if (nota >= 9 && nota <= 10)
		{
			ConA += nota;
			ConAquant++;
		}
	}
	printf ("\n\nQuantidade de alunos: %d\n\n", i-1);
	if (ConEquant > 0)
	printf ("Media dos conceitos E: %.1f\n", ConE/ConEquant);
	else
	printf ("Media dos conceitos E: Nenhum aluno neste conceito.\n");
	if (ConDquant > 0)
	printf ("Media dos conceitos D: %.1f\n", ConD/ConDquant);
	else
	printf ("Media dos conceitos D: Nenhum aluno neste conceito.\n");
	if (ConCquant > 0)
	printf ("Media dos conceitos C: %.1f\n", ConC/ConCquant);
	else
	printf ("Media dos conceitos C: Nenhum aluno neste conceito.\n");
	if (ConBquant > 0)
	printf ("Media dos conceitos B: %.1f\n", ConB/ConBquant);
	else
	printf ("Media dos conceitos B: Nenhum aluno neste conceito.\n");
	if (ConAquant > 0)
	printf ("Media dos conceitos A: %.1f\n", ConA/ConAquant);
	else
	printf ("Media dos conceitos A: Nenhum aluno neste conceito.\n");
	return 0;
}