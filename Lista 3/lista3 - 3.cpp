# include <stdio.h>

int main ()
{
	int a;
	printf ("Insira um numero: \n");
	scanf ("%d",&a);
	if (a>10 && a<100)
	printf ("O numero esta entre 10 e 100 - Intervalo permitido");
	else
	printf ("Intervalo proibido");
	return 0;
}