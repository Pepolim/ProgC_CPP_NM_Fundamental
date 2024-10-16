#include <stdio.h>
#include <string.h>

int main() 
{
	// Solu‡„o mais 'bonita' para o exerc¡cio anterior
	
    char primeira_string	[50] 	= "Programa‡„o em ";
    char segunda_string		[50] 	= "C/C++ - ";
	char terceira_string	[50]	= "Fundamentos!";
    char resultado			[150];  // 150 ‚ a soma do tamanho das string's

    // 'Copia' a primeira string para a var vel resultado
    strcpy(resultado, primeira_string);
    
    // 'Concatena' a segunda string com a vari vel resultado
    strcat(resultado, segunda_string);

    // 'Concatena' a terceira string com a vari vel resultado
    strcat(resultado, terceira_string);

	printf("Primeira string: %s\n", primeira_string);
	
    printf("Segunda string:  %s\n", segunda_string);
	
	printf("Terceira string: %s\n", terceira_string);
    
	printf("Resultado final da concatena‡„o: %s\n", resultado);

    return 0;
}