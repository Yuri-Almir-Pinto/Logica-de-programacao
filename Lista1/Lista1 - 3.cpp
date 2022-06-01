#include <stdio.h>
int main ()
{
	float vendidos, comissao;
	printf ("Fala ae, quanto que o vendedor vendeu, em reais, mermao. ");
	scanf ("%f", &vendidos);
	comissao = vendidos*0.1;
	printf ("Seu vendedor ganho %.2f em comissao, men.", comissao);
	return 0;
}
