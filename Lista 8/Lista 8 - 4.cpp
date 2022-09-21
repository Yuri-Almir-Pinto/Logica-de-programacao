#include <stdio.h>

int main ()
{
	float media, mediasoma=0, mediaquant=0, alunos[20];
	int i, alunosacima=0;
	for (i=0;i<20;i++)
	{
		printf ("Digite a nota do aluno %d: ", i+1);
		scanf ("%f", &alunos[i]);
		mediasoma += alunos[i];
		mediaquant++;
	}
	media = mediasoma/mediaquant;
	for (i=0;i<20;i++)
	{
		if (alunos[i] > media)
			alunosacima++;
	}
	printf ("Media da turma: %.1f\n", media);
	printf ("Quantidade de alunos acima da media: %d", alunosacima);
	return 0;
}