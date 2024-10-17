#include <stdio.h>
#include <stdlib.h>
 
void main()
{
	char nomeFicheiro[100];
    FILE* ficheiroInput;
	printf("Nome do ficheiro que deseja ler? ");
	scanf("%s", nomeFicheiro);
	ficheiroInput = fopen(nomeFicheiro, "r");
    fclose(ficheiroInput);
	
	printf("\n");    
}
