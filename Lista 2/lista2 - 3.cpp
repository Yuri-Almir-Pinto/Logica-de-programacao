#include <stdio.h>
#include <math.h>

int main ()
{
	float nota1, nota2, nota3, notaf;
	printf ("Informe a primeira nota do aluno: ");
	scanf ("%f", &nota1);
	printf ("Informe a segunda nota do aluno: ");
	scanf ("%f", &nota2);
	printf ("Informe a terceira nota do aluno: ");
	scanf ("%f", &nota3);
	notaf = (nota1 + nota2 + nota3)/3;
	printf ("A média do aluno é: %.1f", notaf);
	return 0;
}