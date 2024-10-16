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
// 1§ exemplo(com caracteres)

	char c1, c2;
	
	printf("Escreva um caracter: ");
	//scanf("%c", &c1); //sem utiliza‡ao do 'espaco'
	scanf(" %c", &c1); //com utiliza‡ao do 'espaco'
	mudaLinha();
	
	printf("Escreva outro caracter: ");
	//scanf("%c", &c2); //sem utiliza‡ao do 'espaco'
	scanf(" %c", &c2); //com utiliza‡ao do 'espaco'
	mudaLinha();
	
	printf("Os caracteres lidos foram '%c' e '%c'", c1, c2);
	mudaLinha();

// ------------------------------------------
// 2§ exemplo (com numeros)

	char cChar;
	int xInt;
	double dDouble;
	
	printf("Introduza um caracter: ");
	scanf(" %c", &cChar); //Impressao de um 'char'
	mudaLinha();
	
	printf("Introduza um numero inteiro: ");
	scanf(" %d", &xInt); //Impressao de um 'Int'
	mudaLinha();
	
	printf("Introduza um numero real: ");
	scanf(" %lf", &dDouble); //Impressao de um 'double'
	mudaLinha();
	
	// Nota: na impressao do valor tipo 'double' vamos usar 1 casas decimais
	printf("Os valore lidos foram '%c' | '%d' | '%1.2lf'", cChar, xInt, dDouble);
	mudaLinha();

// ------------------------------------------
// 3§ exemplo (com numeros)

	char strString[10];
	
	printf("Escreva uma palavra: ");
	/**
	scanf(" %s", strString); //nao se usa o caracter '&' //nao evita overflow
	mudaLinha();*/
	scanf(" %9[^\n]", strString); //evita overflow
	mudaLinha();
	/**
	fgets(strString, 10, stdin); //evita overflow
	mudaLinha();*/	
	
	printf("String - '%s'", strString);
	mudaLinha();
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