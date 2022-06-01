# include <stdio.h>
# include <math.h>

int main ()
{
	int num;
	printf ("Insira um numero: \n");
	scanf ("%d", &num);
	num = num/100;
	num = floor(num);
	if (num%2 == 0)
		printf ("O numero na casa das centenas eh PAR.");
		else
			printf ("O numero na casa das centenas eh IMPAR");
	return 0;
}