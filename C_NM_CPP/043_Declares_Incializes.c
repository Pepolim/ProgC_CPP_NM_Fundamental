#include <stdio.h>

/* chcp 860 */

int main()

{	

	/* 	Os coment rios aqui usados s„o apenas para ajudar
		na compreens„o deste c¢digo. Em boa verdade, para
		um programador h  coment rios que podem ser
		'dispensados"...						
	*/
	
    int 	n;        		// declara‡„o de tipo inteiro
    float 	x;        		// declara‡„o de tipo real 'floating point'
    char 	ch;       		// declara‡„o de tipo car cter

	double p1, p2, p3;		// declara‡„o numa s¢ linha (float com mais precis„o)

    x 	= 65.554;    		// inicializa‡„o de vari vel
    n 	= x;          		// inicializa‡„o da vari vel por atribui‡„o do valor de outra vari vel
    ch 	= 'a';        		// inicializa‡„o de vari vel (usar plica em vez de aspas)

    int y = 10;       		// declara‡„o e inicializa‡„o (simultƒneos)
	int z = y * 2;			// declara‡„o e inicializa‡„o, com uma opera‡„o ('multiplica‡„o')
	// char ltr = 'abc'; 		// overflow (erro durante a compila‡„o)

	char q1 = 'r', q2 = 's', q3 = 't';	// declara‡„o e inicializa‡„o, numa s¢ linha
	
	printf("\nNuno Marques");
    printf("\nValor de x = %f\n", x);
	printf("Valor de y = %d\n", y);
	printf("Valor de z = %d\n", z);
    printf("\nValor de n = %d\n", n); // usa apenas a parte inteira do n£mero
	printf("Valor (caracter) de n = %c\n", n);
    printf("\nValor da variavel ch = %c\n", ch);
    printf("Valor (int) da variavel 'ch' = %d\n\n", ch); 
	
	return 0;
}