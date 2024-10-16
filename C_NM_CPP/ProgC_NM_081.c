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