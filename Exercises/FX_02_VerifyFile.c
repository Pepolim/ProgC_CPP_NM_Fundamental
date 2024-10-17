#include <stdio.h>
#include <stdlib.h>
 
void main()
{
	char cidade[100]; // array que vai receber as informaçoes
	FILE *fichInput;
 
    fichInput = fopen("NM_ex_fx_01.txt","r");
    
	if (fichInput == NULL) { // verifica se o ficheiro existe
		
		printf("O ficheiro não existe ou não está 'nesta' pasta...\n");
		
	} else {  
        
		while ( fgets(cidade, 10, fichInput) != NULL )         
			printf("%s", cidade);
     	
		fclose(fichInput);
	  }  
}
