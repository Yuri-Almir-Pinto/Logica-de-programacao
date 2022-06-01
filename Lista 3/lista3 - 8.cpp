# include <stdio.h>
# include <ctype.h>
# include <math.h>

int main ()
{
	float altura, peso, imc;
	char sexo;
	printf ("Insira sua altura (Metros), peso (Kilogramas), e sexo (F ou M) respectivamente: \n");
	scanf ("%f %f %c", &altura, &peso, &sexo);
	sexo = toupper(sexo);
	imc = peso/pow(altura,2);
	printf ("Seu IMC eh: %.2f\n",imc);
	if (sexo == 'F')
		if (imc < 19)
			printf ("Abaixo do peso - < 19");
			else if (imc >= 19 && imc == 24)
				printf ("Normal - 19 - 23,9");
				else if (imc >= 24 && imc < 29)
					printf ("Obesidade leve - 24 - 28,9");
					else if (imc >= 29 && imc < 39)
						printf ("Obesidade moderada - 29 - 38,9");
						else if (imc >= 39)
							printf ("Obesidade morbida - >= 39");
	if (sexo == 'M')
		if (imc < 20)
			printf ("Abaixo do peso - < 20");
			else if (imc >= 20 && imc == 25)
				printf ("Normal - 20 - 24,9");
				else if (imc >= 25 && imc < 30)
					printf ("Obesidade leve - 25 - 29,9");
					else if (imc >= 30 && imc < 40)
						printf ("Obesidade moderada - 30 - 39,9");
						else if (imc >= 40)
							printf ("Obesidade morbida - >= 40");
	return 0;
}