#include <stdio.h>
int main ()
{
	float percorrido, gasto, consumo;
	printf ("O preco ta foda neh? Fala ae, quantos km se percorreu? ");
	scanf ("%f", &percorrido);
	printf ("Agora, quanto que se gastou de combustivel em litros nisso? ");
	scanf ("%f", &gasto);
	consumo = percorrido / gasto;
	printf ("Seu gasto medio eh de %.2f kilometro por litro , men. ", consumo);
	return 0;
}
