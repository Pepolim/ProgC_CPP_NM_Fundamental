#include <stdio.h>
#include <stdlib.h>
/*
Nuno Marques 18/09/24

Este programa pede, ao utilizador, o nome do ficheiro de texto a criar - X
Este programa pede, ao utilizador, o numero total de cidades que pretende introduzir; - 
para cada cidade:
	- pede o nome da cidade - 
	- pede a temperatura - 
grava os dados introduzidos no ficheiro de texto - 
mostra os dados no ecra, lidos a partir do ficheiro - 

*/
void main()
{
    printf("\n");
	
	/* 	Lista de variáveis:
		i - variável contadora de ciclo
		k - variável que guarda o tamanho de cada linha de texto
		temp - array que guarda os valores da temperatura nas cidades
	*/
	
	int i, k, nCidades;
	
	char nomeFicheiro[100];

	//char cidade[4][10] = {"Porto", "Aveiro", "Coimbra", "Lisboa"};
	
	//char* cidade[4] = {"Porto", "Aveiro", "Coimbra", "Vila Pouca de Aguiar"};
	
    //float temp[4] = {12.5, 11.8, 12.2, 14};

	FILE *fichOutput;

	printf("Nome do ficheiro que deseja ler?\n");
	scanf("%s", nomeFicheiro);

	printf("Quantas cidades pretende introduzir?\n");
	scanf("%d", &nCidades);

	char cidade[nCidades][10]; //explode com ponteiro
	float temp[nCidades];

	sprintf(nomeFicheiro, "%s.txt", nomeFicheiro); // concatenar a extensão ao nome

	for ( i = 0; i < nCidades; i++)
	{
		printf("Qual o nome da %d cidade?\n", i+1);
		scanf("%s", cidade[i]);

		printf("cidade: %s\n", cidade[i]);

		printf("Qual é a temperatura da %d cidade?\n", i+1);
		scanf("%f", &temp[i]);

		printf("temp: %f\n", temp[i]);
	}
	

    fichOutput = fopen(nomeFicheiro, "w");
    
	for ( i=0; i<nCidades; i++ ){
    
		k = fprintf(fichOutput,	"%s - %f\r\n", cidade[i], temp[i]); 	// para o ficheiro
		
		k = fprintf(stdout,	"%s - %f\r\n", cidade[i], temp[i]);		// para o ecrã
	 
		printf("Tamanho (em bytes) da linha: %d\n", k);
    }
	
    fclose(fichOutput);
	
	printf("\n");    
}
