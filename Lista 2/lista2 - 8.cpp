#include <stdio.h>
#include <math.h>

int main ()
{
	float valorf, valor, div1000, div100, div10, div1 , casaX000, casa0X00, casa00X0, casa000X, f1, f2, a, b, c;
	printf ("informe um número positivo de 4 dígitos: "); /*2346*/
	scanf ("%f", &valor);
	div1000 = valor/1000; /*2,346*/
	div100 = valor/100; /*23,46*/
	div10 = valor/10; /*234,6*/
	casaX000 = floor(div1000);
	a = casaX000*10; /*20*/
	f1 = floor(div100); /*23*/
	casa0X00 = f1-a;
	b = f1*10; /*230*/
	f2 = floor(div10);/*234*/
	casa00X0 = f2-b;
	c = f2*10; /*2340*/
	casa000X = valor-c;
	valorf = (int)casaX000 + casa0X00 + casa00X0 + casa000X;
	printf ("\n%.0f + %.0f + %.0f + %.0f = %.0f",casaX000, casa0X00, casa00X0, casa000X, valorf);
	return 0;
}