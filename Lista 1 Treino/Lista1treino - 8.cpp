#include <stdio.h>

int main ()
{
	int numfun, horas;
	float salh, sal;
	printf ("Fala ae o número do funcionário: ");
	scanf ("%d", &numfun);
	printf ("Agora fala ae, quantas horas ele trabalhou: ");
	scanf ("%d", &horas);
	printf ("E quanto que ele faz por hora em dólar: ");
	scanf ("%f", &salh);
	sal = horas * salh;
	printf ("NUMBER = %d\nSALARY = U$ %.2f", numfun, sal);
	return 0;
}