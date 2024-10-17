#include <stdio.h>
#include <stdlib.h>

//Nuno Marques 18/09/24

void main()
{
    printf("\n");
	
	/* 	Lista de variáveis:
		i - variável contadora de ciclo
		k - variável que guarda o tamanho de cada linha de texto
		temp - array que guarda os valores da temperatura nas cidades
	*/
	
	int i, k;
	
	char cidade[4][10] = {"Porto", "Aveiro", "Coimbra", "Lisboa"};
	
	// char* cidade[4] = {"Porto", "Aveiro", "Coimbra", "Vila Pouca de Aguiar"};
	
    float temp[4] = {12.5, 11.8, 12.2, 14};
    
	FILE *fichOutput;
 
    fichOutput = fopen("NM_ex_fx_01.txt","w");
    
	for ( i=0; i<4; i++ ){
    
		k = fprintf(fichOutput,	"%s - %f\r\n", cidade[i], temp[i]); 	// para o ficheiro
		
		k = fprintf(stdout,		"%s - %f\r\n", cidade[i], temp[i]);		// para o ecrã
	 
		printf("Tamanho (em bytes) da linha: %d\n", k);
    }
	
    fclose(fichOutput);
	
	printf("\n");    
}
