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
	char strString_1[50]= "Programacao em ";
	char strString_2[]= "C/C++ - ";
	char strString_3[]= "Fundamentos !";
	
	//	tamanho :variaveis que ira contar o numero de 
	//			caracteres que existem na primeira 'string', 
	//			antes de copiar; atualiza a medida que vai 
	//			copiando a segunda 'string'.
	//	j		:variavel contadora de ciclo
	
	int tamanho = 0;
	
	while (strString_1[tamanho] != '\0'){
		++tamanho;
	}
	
	printf("Numero de caracteres: %d", tamanho); //tracagem
	
	//junta as duas string's
	for(int j = 0; strString_2[j] != '\0'; ++j, ++tamanho){
		strString_1[tamanho] = strString_2[j];
		printf("\n%c", strString_2[j]);
	}
	for(int j = 0; strString_3[j] != '\0'; ++j, ++tamanho){
		strString_1[tamanho] = strString_3[j];
		printf("\n%c", strString_3[j]);
	}
	//finalizar a primeira 'string'
	strString_1[tamanho] = '\0';
	
	// Mostra o resultado final 
	printf("\nResultado final: ");
	puts(strString_1);
	
	printf("Numero de caracteres: %d", tamanho);
	
	/* 
	Exerc­cio (ProgC_AF_063-E1): 
		- fazer o mesmo, mas com 3 string's.
			- "ProgramaØ"o em ", "C/C++ - ", "Fundamentos"
  
	Exerc­cio (ProgC_AF_063-E2): 
		- colocar uma condiØ"o 'if' (validaØ"o) para assegurar que n"o se ultrapassam 
		  os 50 carateres da 'string' principal.
  */
	
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