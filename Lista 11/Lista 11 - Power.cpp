#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAM 1000

int main ()
{
	int qp = 0, sel = 0, conf = 0, b1 = 1, b2 = 1, sel2, sel3;
	struct Tpessoa {
		int codigo = -1;
		char nome[80] = "Vazio";
		char genero;
		int idade = 0;
		float altura = 0;
		float peso = 0;
	} pessoa[1000];
	printf ("Quantidade de pessoas a serem cadastradas: ");
	scanf ("%d", &qp);
	do 
	{
		printf ("\n\n --- Menu --- \n\n");
		printf ("1 - Cadastrar pessoas.\n");
		printf ("2 - Alterar o dado de uma pessoa.\n");
		printf ("3 - Excluir uma pessoa.\n");
		printf ("4 - Mostrar dados de uma pessoa.\n");
		printf ("5 - Mostrar dados de todas as pessoas cadastradas.\n");
		printf ("6 - Sair.\n");
		scanf ("%d", &sel);
		switch (sel)
		{
			case 1:
				for (int i = 0 ; i < qp; i++)
				{
					pessoa[i].codigo = i;
					printf ("----- Nome da pessoa %d: ", i+1);
					fflush(stdin);
					fgets (pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
					printf ("----- Genero da pessoa %d: ", i+1);
					scanf ("%c", &pessoa[i].genero);
					fflush(stdin);
					printf ("----- Idade da pessoa %d: ", i+1);
					scanf ("%d", &pessoa[i].idade);
					printf ("----- Altura da pessoa %d: ", i+1);
					scanf ("%f", &pessoa[i].altura);
					printf ("----- Peso da pessoa %d: ", i+1);
					scanf ("%f", &pessoa[i].peso);
					printf ("\n");
				}
				conf++;
				break;
			case 2:
				if (conf == 0)
				{
					printf ("\nCadastre todos primeiro, por favor.\n");
					break;
				}
				printf ("Selecione a pessoa para modificar, pelo seu codigo: ");
				scanf ("%d", &sel2);
				if (sel2 < 0 || sel2 >= qp)
				{
					printf ("Codigo nao disponivel.\n");
					break;
				}
					do 
					{
						printf ("----- Pessoa %d - \n", pessoa[sel2].codigo+1);
						printf ("----- Codigo: %d\n", pessoa[sel2].codigo);
						printf ("----- Nome: %s", pessoa[sel2].nome);
						printf ("----- Genero: %c\n", pessoa[sel2].genero);
						printf ("----- Idade: %d\n", pessoa[sel2].idade);
						printf ("----- Altura: %.2f\n", pessoa[sel2].altura);
						printf ("----- Peso: %.1f\n", pessoa[sel2].peso);
						
						printf ("1 - Nome\n");
						printf ("2 - Genero\n");
						printf ("3 - Idade\n");
						printf ("4 - Altura\n");
						printf ("5 - Peso\n");
						printf ("6 - Sair.\n");
						scanf ("%d", &sel3);
						switch (sel3)
						{
							case 1:
								printf ("Digite o novo nome: ");
								fflush(stdin);
								fgets (pessoa[sel2].nome, sizeof(pessoa[sel2].nome), stdin);
								fflush(stdin);
								break;
							case 2:
								printf ("Digite o novo genero: ");
								fflush(stdin);
								scanf ("%c", &pessoa[sel2].genero);
								fflush(stdin);
								break;
							case 3:
								printf ("Digite a nova idade: ");
								scanf ("%d", &pessoa[sel2].idade);
								break;
							case 4:
								printf ("Digite a nova altura: ");
								scanf ("%f", &pessoa[sel2].altura);
								break;
							case 5:
								printf ("Digite o novo peso: ");
								scanf ("%f", &pessoa[sel2].peso);
								break;
							case 6:
								b1 = 0;
								break;
						}
						
					} while (b1 == 1);
					b1 = 1;
					break;
			case 3:
				if (conf == 0)
				{
					printf ("\nCadastre todos primeiro, por favor.\n");
					break;
				}
				printf ("Selecione a pessoa que voce deseja excluir, pelo codigo: ");
				scanf ("%d", &sel);
				if (sel < 0 || sel >= qp)
				{
					printf ("Codigo nao disponivel.\n");
					break;
				}
				strcpy (pessoa[sel].nome, "-\n");
				fflush(stdin);
				pessoa[sel].genero = '-';
				pessoa[sel].idade = 0;
				pessoa[sel].altura = 0;
				pessoa[sel].peso = 0;
				break;
				
			case 4:
				if (conf == 0)
				{
					printf ("\nCadastre todos primeiro, por favor.\n");
					break;
				}
				printf ("Selecione a pessoa que voce deseja visualizar, pelo codigo: ");
				scanf ("%d", &sel);
				if (sel < 0 || sel >= qp)
				{
					printf ("Codigo nao disponivel.\n");
					break;
				}
				printf ("----- Pessoa %d - \n", pessoa[sel].codigo+1);
				printf ("----- Codigo: %d\n", pessoa[sel].codigo);
				printf ("----- Nome: %s", pessoa[sel].nome);
				printf ("----- Genero: %c\n", pessoa[sel].genero);
				printf ("----- Idade: %d\n", pessoa[sel].idade);
				printf ("----- Altura: %.2f\n", pessoa[sel].altura);
				printf ("----- Peso: %.1f\n", pessoa[sel].peso);
				break;
				
			case 5:
				if (conf == 0)
				{
					printf ("\nCadastre todos primeiro, por favor.\n");
					break;
				}
				for (int i = 0 ; i < qp; i++)
				{
						printf ("\n----- Pessoa %d -\n", i+1);
						printf ("----- Codigo: %d\n", pessoa[i].codigo);
						printf ("----- Nome: %s", pessoa[i].nome);
						printf ("----- Genero: %c\n", pessoa[i].genero);
						printf ("----- Idade: %d\n", pessoa[i].idade);
						printf ("----- Altura: %.2f\n", pessoa[i].altura);
						printf ("----- Peso: %.1f\n", pessoa[i].peso);
						fflush(stdin);
				}
				break;
				
			case 6:
				b2 = 0;
				break;
		}	
	} while (b2 == 1);
	return 0;
}