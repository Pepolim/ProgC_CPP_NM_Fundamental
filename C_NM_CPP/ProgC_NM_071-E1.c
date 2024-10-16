#include <stdio.h>


void mudaLinha(void);

int eNumPrimo(int num);

int eNumPar(int num);

void mostraPrimos(int limiteInferior, int limiteSuperior);

void mostraPares(int limiteInferior, int limiteSuperior);

// Programa principal
int main()
{
    int limiteInferior, limiteSuperior;
	
    printf("Introduza dois valores, separados por '-': ");
    scanf("%d-%d", &limiteInferior, &limiteSuperior);
	  
    printf("Os n£meros primos entre %d e %d s„o: ", limiteInferior, limiteSuperior);
		mostraPrimos(limiteInferior, limiteSuperior);
	
	mudaLinha();
	
	printf("Os n£meros pares entre %d e %d s„o: ", limiteInferior, limiteSuperior);
		mostraPares(limiteInferior, limiteSuperior);
    
    return 0;
	
} // Fim main()


//-------------------------------------------------------------
// Fun‡„o que escreve todos os n£meros primos entre o limite definido  
	void mostraPrimos(int limiteInferior, int limiteSuperior)
	{
		while( limiteInferior <= limiteSuperior )
		{
			// Se o n£mero ‚ 'primo' mostra, sen„o... n„o mostra!
			if( eNumPrimo ( limiteInferior) )
			{
				printf("%d ", limiteInferior);
			}
			
			limiteInferior++;
		}
	}
	
//-------------------------------------------------------------
// Fun‡„o que escreve todos os n£meros pares entre o limite definido  
	void mostraPares(int limiteInferior, int limiteSuperior)
	{
		while( limiteInferior <= limiteSuperior )
		{
			// Se o n£mero ‚ 'PAR' mostra, sen„o... n„o mostra!
			if( eNumPar ( limiteInferior) )
			{
				printf("%d ", limiteInferior);
			}
			
			limiteInferior++;
		}
	}

//-------------------------------------------------------------
// Fun‡„o que verifica se um n£mero ‚ 'primo'  
	int eNumPrimo(int numero)   
	{  
		int i;  
		int devolve = 1; 
		
		for( i = 2; i <= numero/2; i++ )    
		{        
			if( numero % i == 0 ) 
			{  
				devolve = 0; 
			}    
		}     
		return devolve; 
		
	}
	
//-------------------------------------------------------------
// Fun‡„o que verifica se um n£mero ‚ 'par'  
	int eNumPar(int numero)   
	{  
		int i;  
		int devolve = 0; 
		
		for( i = 2; i <= numero; i++ )    
		{        
			if( numero % 2 == 0 ) 
			{  
				devolve = 1; 
			}    
		}     
		return devolve; 
		
	}
	
void mudaLinha(void)
{
	printf("\n"); // muda de linha
}	