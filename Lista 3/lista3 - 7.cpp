# include <stdio.h>

int main ()
{
	float l1, l2, l3;
	printf ("Digite os lados 1, 2 e 3 do triangulo: \n");
	scanf ("%f %f %f",&l1, &l2, &l3);
	if (l1==l2 && l1==l3)
		printf ("Equilatero");
		else if (l1 != l2 && l2 != l3 && l3 != l1) 
			printf ("Escaleno");
			else
				printf ("Isosceles");
	return 0;
}