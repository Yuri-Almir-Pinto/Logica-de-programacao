#include <stdio.h>
#include <ctype.h>

int main ()
{
	int idade, spec = 0, votos = 0, recomendacoes = 0;
	char reco, voto;
	while (1)
	{
		printf ("Digite sua idade: (digite '0' caso deseje sair)\n");
		scanf ("%d", &idade);
		if (idade == 0)
			break;
		if (idade <0)
		{
			printf ("\n\nValor invalido.");
			continue;
		}
		printf ("\nVoce gostou do filme? [S ou N]\n");
		scanf (" %c", &voto);
		voto = toupper(voto);
		printf ("\nVoce recomendaria o filme a um amigo? [S ou N]\n");
		scanf (" %c", &reco);
		reco = toupper(reco);
		if (voto == 'S')
			votos++;
		if (reco == 'S')
			recomendacoes++;
		spec++;
	}
	printf ("\n\nTotal de espectadores: %d", spec);
	printf ("\nTotal de votos: %d", votos);
	printf ("\nTotal de recomendacoes: %d", recomendacoes);
	return 0;
}