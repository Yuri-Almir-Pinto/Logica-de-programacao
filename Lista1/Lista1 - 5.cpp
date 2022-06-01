#include <stdio.h>
int main ()
{
	float comprimento, largura, preco, custo, area;
	printf ("Eae de novo, men. Fala ae, qual o comprimento da sala em metros? ");
	scanf ("%f", &comprimento);
	printf ("Agora fala ai qual eh a largura da sala em metros. ");
	scanf ("%f", &largura);
	printf ("Por fim, fala ae, qual o preço do metro² carpete que se vai comprar em reais? ");
	scanf ("%f", &preco);
	area = comprimento * largura;
	custo = preco * area;
	printf ("Isso dai vai custar %.2f reais, boy.", custo);
	return 0;
}
