# include <stdio.h>

int main ()
{
	float salini, salfin;
	printf ("Informe o salario do funcionario\n");
	scanf ("%f", &salini);
	if (salini > 0 && salini <= 900)
		salfin = salini*1.2;
		else if (salini > 900 && salini <= 1300)
			salfin = salini*1.1;
			else if (salini > 1300 && salini <= 1800)
				salfin = salini*1.05;
					else if (salini > 1800)
						salfin = salini;
	printf ("O salario final eh: %.2f", salfin);
	return 0;
}