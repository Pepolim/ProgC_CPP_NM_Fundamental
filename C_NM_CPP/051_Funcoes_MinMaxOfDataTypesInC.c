#include <stdio.h>
#include <stdint.h>
#include <stdbool.h> //variaveis booleanas
#include <limits.h>
#include <float.h>
#include <time.h>

/* chcp 860 */

//-----------------------------------
//funcoes

void mudaLinha(){
	printf("\n");
}
void dataCriadoPor(char nome[]){
	time_t dataHora;
	time(&dataHora);
	
	mudaLinha();
	printf("Este programa foi escrito por %s,em %s" ,nome, ctime(&dataHora));
}
void escreveLinha(int tamanho){
	mudaLinha();
	for (int i = 1; i < tamanho; ++i)
	{
    printf("%c", 196);
	}
}

//Principal	
void main(void){
	
	dataCriadoPor("Nuno Marques");
	// Valores minimos e maximos dos tipos de dados em 'C'
	escreveLinha(61);
	printf("\nValores minimos e maximos dos tipos de dados em 'C'");
	
	printf("\nSigned char:	[%20d, %20d]"	,SCHAR_MIN , SCHAR_MAX);
	printf("\nShort int:	[%20d, %20d]"	,SHRT_MIN , SHRT_MAX);
	printf("\nInt:		[%20d, %20d]"	,INT_MIN , INT_MAX);
	printf("\nFloat:		[%20.5g, %20.5g]"	,FLT_MIN , FLT_MAX);
	printf("\nBoolean:	[%20d, %20d]"	,false , true);
	printf("\nLong int:	[%20g, %20g]"	,LONG_MIN , LONG_MAX);
	printf("\nLong Long:	[%20lli, %20lli]"	,LLONG_MIN , LLONG_MAX);
	escreveLinha(61);
}