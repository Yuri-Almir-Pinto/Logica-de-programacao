#include <stdio.h>

int main ()
{
	float valorin, valorfin, valormen;
	int selecao;
	printf ("Informe o valor da sua compra, em reais: ");
	scanf ("%f", &valorin);
	printf ("\nSelecione seu metodo de pagamento: \n\nPagamento a vista - 15%% de desconto sobre o valor total da compra. (Opcao 1)\nPagamento com cheque pre-datado para 30 dias - 10%% de desconto sobre o valor total da compra. (Opcao 2)\nPagamento parcelado em 3 vezes - 5%% de desconto sobre o valor total da compra. (Opcao 3)\nPagamento parcelado em 6 vezes - nao tem desconto. (Opcao 4)\nPagamento parcelado em 12 vezes - 8%% de acrescimo sobre o valor total da compra. (Opcao 5)\n\n");
	scanf ("%i", &selecao);

	switch (selecao)
	{
		case 1:
			printf ("\nValor total da compra: R$%.2f\nValor final da compra: R$%.2f\nDesconto Total: R$%.2f", valorin, (valorin*0.85), (valorin - (valorin*0.85)));
			break;
		case 2:
			printf ("\nValor total da compra: R$%.2f\nValor final da compra: R$%.2f\nDesconto Total: R$%.2f", valorin, (valorin*0.90), (valorin - (valorin*0.90)));
			break;
		case 3:
			printf ("\nValor total da compra: R$%.2f\nValor final da compra: R$%.2f\nDesconto Total: R$%.2f\nQuantidade de parcelas: 3\nValor das parcelas: R$%.2f", valorin, (valorin*0.95), (valorin - (valorin*0.95)), ((valorin*0.95)/3));
			break;
		case 4:
			printf ("\nValor final da compra: R$%.2f\nQuantidade de parcelas: 6\nValor das parcelas: R$%.2f", valorin, (valorin/6));
			break;
		case 5:
			printf ("\nValor total da compra: R$%.2f\nValor final da compra: R$%.2f\nJuros totais: R$%.2f\nQuantidade de parcelas: 12\nValor das parcelas: R$%.2f", valorin, (valorin*1.08), ((valorin * 1.08) - valorin), ((valorin*1.08)/12));	
			break;
		default:
			printf ("\nOpcao invalida.");
	}
	return 0;
}