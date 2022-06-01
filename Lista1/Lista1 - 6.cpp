#include <stdio.h>
int main ()
{
	int bit;
	float velocidade, tempo;
	printf ("Pela sexta vez ein vei, caramba... Fala logo, qual o tamanho do seu arquivo em bits?");
	scanf ("%d", &bit);
	printf ("Agora fala ae, qual eh a velocidade da sua net em bits por segundo?");
	scanf ("%f", &velocidade);
	tempo = bit / velocidade;
	printf ("Vai demorar %.2f segundos pra isso terminar de baixar, boy. Agora vaza.", tempo);
	return 0;
}