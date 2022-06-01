# include <stdio.h>
# include <math.h>

int main ()
{
	float num, sqrt1, pow1;
	printf ("Insira um numero: \n");
	scanf ("%f", &num);
	if (num > 0) {
		sqrt1 = sqrt(num);
		printf ("A raiz quadrada deste numero eh: %f",sqrt1);
	}
		else if (num < 0) {
			pow1=pow(num,2);
			printf ("Este numero elevado ao quadrado eh: %f",pow1);
	}
	return 0;
}