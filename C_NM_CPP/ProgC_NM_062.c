#include <stdio.h>
#include <time.h>

/* chcp 860 */

//-----------------------------------

void mudaLinha(void);
void meuCarimbo(void);

//Principal	

void main(void){
	mudaLinha();
	meuCarimbo();

// ------------------------------------------
	int i, inicio, fim, somatorio = 0;
	
	//Introduzir o valor de incio e o valor de fim
	printf("Valor de inicio: ");
	scanf("%d",&inicio);
	mudaLinha();
	
	printf("Valor de fim: ");
	scanf("%d",&fim);
	mudaLinha();
	
	for(i = inicio; i <= fim; i++)
	{
		somatorio += i;
		printf("%d",somatorio);
		mudaLinha();
	}
	
	printf("A soma dos numero de %d a %d e %d", inicio, fim, somatorio);

}

// ------------------------------------------
// Fun‡„o que muda de linha quando necess rio
void mudaLinha(void)
{
	printf("\n"); // muda de linha
}	
// ------------------------------------------
// Fun‡„o que mostra (algumas) informa‡”es gerais
void meuCarimbo(void)
{
	time_t tempo_atual = time(NULL);
	struct tm *tempo_local = localtime(&tempo_atual);
	char data_hora[64];
	strftime(data_hora, sizeof(data_hora), "%d-%m-%Y %H:%M:%S", tempo_local);
	printf("\n[Nuno Marques] - [ %s ]", data_hora);
	mudaLinha();
}